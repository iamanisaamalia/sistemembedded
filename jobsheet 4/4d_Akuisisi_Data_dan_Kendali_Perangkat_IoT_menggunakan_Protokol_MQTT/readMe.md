# D. Akuisisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT.

## 1. Melalui Dashboard Node_red

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f56bbb5b-d7e8-4096-8fe4-532f7e4356a0)

### b. Source Code
Kode program dapat dilihat <a href="4d_led/4d_led.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, masih sama seperti sebelumnya menggunakan protokol MQTT. Yang menjadi tambahan disini adalah pengaturan nyala LED pada dashboard Node-Red.
LED dihubungkan pada pin D2 yang kemudian dapat diatur nyala atau padam dengan mengubah tombol switch pada dashboard Node-Red.

- Serial Monitor
  
  ![serial](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6bffb285-ca2f-43c2-a135-814c256c91ed)

- Debug
  
  ![debug](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/9d599d1c-3ff5-4c58-8590-59eef2139a42)

- Dashboard
  
  ![dashboard](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/94364236-2560-40b6-91ef-95b12cf69c40)

- Hasil Percobaan

  https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/934ad705-5ec6-466a-a56d-e907c2962165

### d. Flowchart

![flow](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/9c8e1c30-27cc-4db3-93d7-abb49d858954)


## 2. Melalui Dashboard Adafruit.io

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f56bbb5b-d7e8-4096-8fe4-532f7e4356a0)

### b. Source Code
Kode program dapat dilihat <a href="4d_adafruit/4d_adafruit.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada bagian ini yang membedakan adalah pengaturan nyala LED diatur melalui dashboard Adafruit. Masuk ke website io.adafruit.com dan buat akun terlebih dahulu.
Kemudian, buat dashboard widget seperti panduan jobsheet. Hal yang penting disini adalah `IO USERNAME` dan `IO KEY` yang harus kita definisikan pada program Arduino.
IO username adalah nama pengguna (username) yang digunakan untuk login, sedangkan IO key (kunci IO) adalah kunci API (API key) yang digunakan untuk otentikasi dan mengakses layanan Adafruit IO.
IO KEY dapat dilihat pada dasbor Adafruit yang bergambar kunci berwarna kuning. Jangan lupa untuk memastikan feed (umpan) telah sesuai. Jika telah selesai dikonfigurasi, hasil akan terlihat seperti berikut.

- Serial Monitor
  
  ![aio-serial-1](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/c82926fc-77f7-4373-998b-6a419d381fea)
  
  ![aio-serial-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f60b6a06-a94e-4554-9dfa-c38efe023df0)

- Adafruit Widget
  
  ![aio-widget](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/2aa07422-b8c3-4c9f-8ea2-dfdc8b537b21)

- Hasil Percobaan
  
  https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/e52c84a5-9fe7-42ca-aae9-acdff57bfc79

### d. Flowchart

![aio-flow](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/7f974f8e-16d7-42b4-8c89-13cedbd38990)
