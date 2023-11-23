// ESP32 Touch Test
const int touch = 4;
const int led = 2;
int  value = 20;
int sentuh;
int a = 0; 
void setup() {
 Serial.begin(115200);
 delay(200); // give me time to bring up serial monitor
 Serial.println("ESP32 Touch Test");
 pinMode(led, OUTPUT);
}
void loop() {
 sentuh = touchRead(touch);
// Serial.println(sentuh); // get value of Touch 0 pin = GPIO 4
// delay(300);
 if (sentuh < value){
  digitalWrite(led,HIGH);
  }else {
    digitalWrite(led,LOW);
    }
 if (sentuh < 20){
  a=a+10;
  delay(200);
  }
  Serial.println(a);
  delay(200);
}
