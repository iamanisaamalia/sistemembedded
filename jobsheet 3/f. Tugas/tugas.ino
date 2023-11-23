#include <WiFi.h>
#include <EEPROM.h>
#include <ESPAsyncWebServer.h>

// Default SSID dan Password untuk mode AP
const char* apSSID = "ESP32-AP";
const char* apPassword = NULL; // NULL berarti tidak ada password

// EEPROM address untuk menyimpan konfigurasi SSID dan Password
const int eepromAddrSSID = 0;
const int eepromAddrPassword = 64; // Ganti dengan nilai yang sesuai

WiFiServer server(80); // Port web server

void setup() {
  Serial.begin(115200);
  EEPROM.begin(512);

  // Mode Access Point
  WiFi.softAP(apSSID, apPassword);
  delay(100);

  server.begin();
  Serial.println("Access Point telah dibuat. Hubungi ESP32 melalui IP Address:");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    Serial.println("Client terhubung");
    String request = client.readStringUntil('\r');
    client.flush();

    if (request.indexOf("/config") != -1) {
      handleConfigPage(client);
    } else {
      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: text/html");
      client.println();
      client.println("<html><body>");
      client.println("<h1>Selamat datang ke halaman konfigurasi ESP32</h1>");
      client.println("<p><a href='/config'>Konfigurasi SSID dan Password</a></p>");
      client.println("</body></html>");
    }

    delay(1);
    client.stop();
    Serial.println("Client terputus");
  }
}

void handleConfigPage(WiFiClient client) {
  String response = "<html><body>";
  response += "<h1>Konfigurasi SSID dan Password</h1>";
  response += "<form method='POST' action='/save'>";
  response += "SSID: <input type='text' name='ssid'><br>";
  response += "Password: <input type='password' name='password'><br>";
  response += "<input type='submit' value='Simpan'>";
  response += "</form>";
  response += "</body></html>";

  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println();
  client.print(response);
}

void saveConfig(const String& ssid, const String& password) {
  // Simpan SSID dan Password ke EEPROM
  for (int i = 0; i < ssid.length(); ++i) {
    EEPROM.write(eepromAddrSSID + i, ssid[i]);
  }
  for (int i = 0; i < password.length(); ++i) {
    EEPROM.write(eepromAddrPassword + i, password[i]);
  }
  EEPROM.commit();
}

void clearConfig() {
  // Hapus konfigurasi SSID dan Password di EEPROM
  for (int i = 0; i < 64; ++i) {
    EEPROM.write(eepromAddrSSID + i, 0);
    EEPROM.write(eepromAddrPassword + i, 0);
  }
  EEPROM.commit();
}

void setupConfig(const String& ssid, const String& password) {
  // Konfigurasi SSID dan Password WiFi
  WiFi.softAPdisconnect(true); // Matikan mode Access Point

  WiFi.begin(ssid.c_str(), password.c_str());
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Terhubung ke WiFi...");
  }

  Serial.println("Terhubung ke WiFi!");
}

void clearConfigHandler() {
  clearConfig();
  Serial.println("Konfigurasi SSID dan Password dihapus.");
}

void saveConfigHandler(const String& ssid, const String& password) {
  saveConfig(ssid, password);
  setupConfig(ssid, password);
  Serial.println("Konfigurasi SSID dan Password disimpan.");
  Serial.print("SSID: ");
  Serial.println(ssid);+
  Serial.print("Password: ");
  Serial.println(password);
}
