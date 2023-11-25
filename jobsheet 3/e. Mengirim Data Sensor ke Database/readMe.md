# E. Mengirim Data Sensor ke Database
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/0b3d3a03-e7a6-44f0-878d-1e41bbe7d229)


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/e.%20Mengirim%20Data%20Sensor%20ke%20Database/mengirim_data/mengirim_data.ino">di sini</a>

### c. Hasil dan Pembahasan
mengirim data sensor ke database dimulai dengan membuat rangkaian sederhana seperti pada jobsheet kemudian install library Asynch Web Server dan Asycnh TCP untuk ESP 32, lalu upload program ke ESP32 dan buka serial monitor untuk mengetahui IP Address ESP32 kemudian akses IP Address ESP32 pada browser laptop.
ESP akan melakukan inisialisasi awal untuk WiFi, dht, serial monitor, serta web server. ESP akan melakukan hosting web server menggunakan localhost sebagai servernya. Web server ini dapat diakses menggunakan IP address dari ESP setelah terhubung dengan jaringan WiFi.
ESP akan membaca data dari sensor berupa suhu dan kelembaban yang kemudian disimpan dalam variabel. Data dari variabel kemudian dikirim melalui link yang sudah disediakan menggunakan method POST via javascript.



https://github.com/iamanisaamalia/sistemembedded/assets/147674408/3228409d-9dcf-4454-b3be-165690b96f7d





### d. Flowchart
![flow-3d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/5def1b32-fb02-4d03-8196-cb031d0fffd7)


# Tugas
