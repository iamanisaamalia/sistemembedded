# A. ESP32 Capasitive Touch Sensor  

## 1. Cek Touch

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="1.%20Touch%201/Capacitive_Touch_Sensor/Capacitive_Touch_Sensor.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah apabila ujung jumper disentuh maka grafik kapasitansi akan naik.

https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/f50860c5-eaa7-4c26-b54c-9a681d860de2


## 2. LED menyala ketika sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="2.%20LED%20menyala%20ketika%20sensor%20disentuh/Capacitive_Touch_Sensor_2/Capacitive_Touch_Sensor_2.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah LED akan menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh.

https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/2ec4e8d4-52c4-451c-8abe-eeec59090fe5


## 3. LED menyala blink ketika sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="3.%20ketika%20sensor%20disentuh%2C%20LED%20menyala%20Blink/Capacitive_Touch_Sensor_3/Capacitive_Touch_Sensor_3.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika sensor disentuh, LED menyala Blink. Dengan program seperti diatas namun diberi tambahan `digitalWrite(led, LOW)` dan `delay(500)` sehingga program akan mempengaruhi pin LED HIGH dan LOW secara looping terus menerus. Jika nilai kapasitansi kurang dari 20 (sentuhan terdeteksi), LED pada pin 16 akan berkedip dengan interval 500 ms on dan 500 ms off. Jika nilai kapasitansi lebih besar atau sama dengan 20 (tidak ada sentuhan terdeteksi), LED dimatikan.

https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/c7892d65-705d-4175-859c-f39fddcf9ed8


## 4. Angka yang akan bertambah setiap kali sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">


### b. Source Code
Kode program dapat dilihat <a href="4.%20angka%20yang%20akan%20bertambah%20setiap%20kali%20sensor%20disentuh/Capacitive_Touch_Sensor_4/Capacitive_Touch_Sensor_4.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh

https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/1b0482ec-fc3c-4dc0-89b1-0ebd18081a1a


## 5. LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="5.%20LED%20tersebut%20adalah%20bergerak%20dari%20kiri%20ke%20kanan%2C%20kemudian%20kanan%20ke%20kiri/Capacitive_Touch_Sensor_5/Capacitive_Touch_Sensor_5.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah terdapat 3 LED ketika sensor disentuh, LED menyala menjadi running LED. Nyala running LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu. Menggunakan program dimana Program akan membuka komunikasi serial dan mencetak pesan "ESP32 Touch Test". Di dalam loop utama, nilai kapasitansi sensor sentuh pada pin T0 (GPIO 4) terus-menerus dibaca. Jika nilai kapasitansi kurang dari 20 (sentuhan terdeteksi), tiga LED (led, led2, led3) akan dinyalakan secara berurutan dengan interval 500 ms on dan 500 ms off. Jika tidak ada sentuhan terdeteksi, semua LED dimatikan. Nilai hitungan dicetak ke serial monitor.

https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/f7d25a2b-cae7-4f44-971c-9b7c810137c1
