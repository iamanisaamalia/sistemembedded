# A. Koneksi MQTT Broker

### a. Langkah Kerja
  1.  Buka Node-Red
  2.  Kemudian buatlah tab baru untuk memulai membuat flow pemrograman backend-server menggunakan protokol MQTT.
  3.  Buatlah flow program seperti pada Gambar 6.1.
  ![langkah-1](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/1245d44d-9929-47be-b278-100beb1c3c03)


  4. Konfigurasikan Temperature Node seperti Gambar di bawah ini.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/7a200dc5-b942-4b89-a35f-813f086e3731">

  5. Kemudian konfigurasikan Pub/Sub Node seperti pada Gambar 6.3. Klik pada tanda lingkaran merah untuk membuat koneksi dengan broker MQTT.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/41d46294-b921-43a8-9579-d09fee7bbc30">

   6. Setelah itu, konfigurasikan Broker Node seperti pada Gambar 6.4. Sesuaikan dengan broker server sebelumnya, agar tercipta koneksi. Perhatikan juga topic yang digunakan, agar pesan dapat dikirim pada address yang benar.
  <img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/962ee209-2197-4c82-93a7-6ff6239df98f">

   7. Setelah semua telah dikonfigurasi, deploy flow dan dokumentasikan hasil
outputnya.

### b. Hasil dan Pembahasan
Broker MQTT bertindak sebagai perantara antara penerbit (publisher) dan pelanggan (subscriber). MQTT memfasilitasi pertukaran pesan dengan mengelola topik (topics) yang diterbitkan dan di-subscribe oleh klien sehingga kita dapat mengirim dan menerima data melalui broker MQTT.
Selanjutnya Klik tombol “Deploy” yang terletak pada pojok kanan atas UI untuk menjalankan program. 
Hasil dari operasi tersebut akan ditampilkan di Debug Node. Hasilnya adalah nilai Temperature yaitu "28".


![hasil-1](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/9895ba4d-e1a8-41fc-a7ac-6dd8f1197465)
