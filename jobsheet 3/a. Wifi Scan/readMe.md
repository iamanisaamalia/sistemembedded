# A. ESP32 Wi-Fi Modes dan Wifi-Scan

## Wifi Scan

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/a37af924-187d-41d9-8d78-a6316d5a189b)


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/a.%20Wifi%20Scan/wifi_scan/wifi_scan.ino">di sini</a>

### c. Hasil dan Pembahasan
ESP akan melakukan scanning dan memunculkan hasilnya pada serial monitor jaringan WiFi beserta kekuatan sinyal yang didapat. Jika tidak ada jaringan maka akan tertulis "No Networks Found". Scanning akan diulang setiap 5 detik karena terdapat delay(5000) dan lebih baik tidak dilakukan terlalu cepat (spam).


https://github.com/iamanisaamalia/sistemembedded/assets/147674408/90166337-83b0-44d6-b078-5228801bddc4

### d. Flowchart
![Uploading flow-3a.png…]()
