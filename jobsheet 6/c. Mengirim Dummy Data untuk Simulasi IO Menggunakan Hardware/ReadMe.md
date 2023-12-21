# C. Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware

### a. Langkah Kerja
  1. Buka browser Google Chrome yang terinstall pada Windows.
  2. Install ekstensi MQTTbox untuk Google Chrome.
  3. Setelah itu, buka MQTTbox, klik Create Clients. Setelah itu, konfigurasikan MQTTbox seperti Gambar 6.9. Sesuiakan IP Address Host dengan IP Address MQTT Server pada VM Ubuntu. Untuk mengetahui alamat IP, pada Terminal, ketikkan perintah ifconfig.
<img width="369" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/6d53e5cc-3ed0-4328-853c-4453f3623f42">

  4. Setelah itu, klik Save. Kemudian konfigurasikan topic, QoS, Payload Type, dan Payload seperti Gambar 6.10.
<img width="274" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/29afb41d-fe8b-402a-bf43-70dad9fe6bb2">

  5. Kemudian, pada terminal Ubuntu, ketikkan perintah sudo ufw allow 1883 untuk membuka port 1883 agar tidak di-block Firewall.
  6. Untuk mencoba publish/mengirim data, klik tombol Publish. Sebelumnya klik tombol Subscribe untuk mengetahui data yang dikirim dapat diterima kembali oleh Clients.
  7. Dokumentasikan hasilnya.


### b. Hasil dan Pembahasan
Pada percobaan ke 3 yaitu percobaan Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware hal pertama yang dilakukan adalah mengkonfigurasi dan mengimplementasi Mqtt pada hardware, kemudian melanjutkan ke mengirim data dummy melalui MQTT, kemudian memulai interaksi dengan topik MQTT dan akan divalidasi sebelum klik tombol "Subscribe"
Selanjutnya Klik tombol “Subscribe” untuk mengetahui data yang dikirim dapat diterima kembali oleh Clients. Kemudian klik tombol Publish. Hasil yang ditampilkan adalah {"temp":26} dari data dummy topic livingroom/sensors.

![hasil-3](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/7954a14e-5d19-408a-8569-70b91b3ae4f0)

### Tugas

Kembangkan flow program yang sudah dibuat agar dapat menerima data berupa String, Bolean dan Number. Kemudian tampilkan data tersebut secara terpisah pada masing-masing log.

![hasil-tugas](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/aebc2501-c5d7-4dbb-a19b-0a9c6ad78cf8)

Pada bagian ini dikembangkan agar dapat menrima data berupa string, boolean, dan number. Ketiga data tersebut akan ditampilkan pada 3 log yang berbeda. Data yang ditampilkan adalah {"temp":26}, Hello World dan 12.
