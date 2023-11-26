# C. Menggunakan Switch Node

### a. Langkah Kerja
  1. Buatlah flow seperti pada gambar berikut
     ![langkah-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ec4262a0-e368-4a1a-9d72-65659b930523)

  2. Konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 28. Kemudian pada Inject Node 2, isikan Payload dengan angka 27.
  3. Konfigurasi Switch Node seperti pada gambar di bawah.
     
     ![job5c](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/ebbf8f0e-ee57-4912-8e61-d3999b69ff6c)

  4. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
menggunakan switch node dimulai dengan membuat flow dan konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 28. Kemudian pada Inject Node 2, isikan Payload dengan angka 27. Kemudian mengkonfigurasi switch node seperti pada jobsheet kemudian deploy dan dokumentasi hasil yang berupa menguji alur (flow) dengan memasukkan data dari sensor gerak atau menggunakan nilai simulasi dari Inject Node, data diarahkan ke node-node yang sesuai berdasarkan kondisi yang diatur pada Switch Node. Switch Node memungkinkan untuk memilih rute atau jalur data yang berbeda berdasarkan kondisi atau nilai tertentu yang diperiksa dari pesan yang mengalir. Ini memungkinkan pemisahan atau pengolahan data yang lebih terarah sesuai keinginan. Misalnya, jika Anda ingin memisahkan data berdasarkan nilai dari sensor gerak (misalnya, nilai "true" dan "false"), Anda dapat menggunakan konfigurasi berikut pada Switch Node:
•	Rule 1: Jika `msg.payload` sama dengan true, arahkan data ke node berikutnya.
•	Rule 2: Jika `msg.payload` sama dengan false, arahkan data ke node lain atau abaikan data ini.

![hasil-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/0df147e7-577a-4cf5-a49d-65aa5d151437)
