# B. Menerima Data JSON Melalui Protokol MQTT

### a. Langkah Kerja
  1. Buatlah flow program seperti pada Gambar 6.5.
      ![langkah-2](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/be037b6b-6edd-4c5f-b19a-c4162c5590b6)

  2. Flow pada Gambar 6.5 merupakan pengembangan dari Gambar 6.1 dengan
menambahkan JSON Parser dan Parser Function Node.
  3. Setelah flow program dibuat, konfigurasikan Temperature Node seperti
Gambar 6.6.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/d49d2464-04fe-4663-b851-f1d320c41ee9">

  4. Kemudian konfigurasi JSON Parser Node seperti pada Gambar 6.7.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/28260f7f-28f0-496d-8711-0884ad738bdf">

  5. Setelah itu, konfigurasi pula Parser Function Node seperti Gambar 6.8, agar data JSON dapat dipisahkan dan diambil yang diperlukan saja.
<img width="400" alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/2977bab6-2abd-4bed-98c0-2ae8dd7a2ecd">

  6. Deploy flow program, kemudian dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
Percobaan Menerima Data JSON Melalui Protokol MQTT untuk menentukan cara parsing atau pemrosesan pesan JSON yang diterima. Bagaimana pesan JSON diubah menjadi objek atau data yang dapat digunakan dalam aplikasi atau sistem yang diimplementasikan. `on_connect` digunakan untuk menangani kejadian saat klien berhasil terhubung, sementara `on_message` digunakan untuk mengelola pesan yang diterima dari broker MQTT. Keduanya memungkinkan pengguna untuk menentukan tindakan khusus saat koneksi berhasil atau ketika pesan baru diterima.
Hasil yang ditampilkan adalah nilai dari humi, yaitu "30"


![hasil-2](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/ce02f934-cfe2-4509-967c-7ebfc0868395)
### Tugas

Kembangkan flow program tersebut agar mempunya 2 input (Inject Node). Input pertama seperti contoh, kemudian pisahkan datanya agar bisa tertampil
dalam log yang berbeda. Sementara itu, Input yang lain menggunakan topic
kitchen/sensors, dengan jenis sensor flame : 0 , metane : 0, temp : 24, humi :38. Tampilkan datanya dalam log yang berbeda-beda.

![langkah-2-tugas](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/94e161f9-379a-4322-9bb5-56725231c7f0)

![hasil-2-tugas](https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/a65ae6c2-8ce7-4cdd-9596-38945d252070)

Pada bagian ini, ditambahkan sebuah inject node lagi sehingga menjadi 2 buah inject node. Pada inject node pertama masih berisi topic livingroom/sensors. Pada inject node kedua diberikan topic kitchen/sensors dengan jenis sensor flame : 0 , metane : 0, temp : 24, humi :38.
Kedua inject node tersebut akan ditampilkan pada debug node yang berbeda, yaitu inject pertama dengan nilai humi "30" akan ditampilkan pada debug 1, sedangkan inject kedua dengan nilai humi "30" akan ditampilkan pada debug 2.
