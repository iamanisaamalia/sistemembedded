# A. Regresi Linier

## 1. Simulasi Pemrosesan Data Menggunakan Regresi Linier

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6f245b62-b8e1-44c0-a117-32e6a36571a4)

### b. Source Code
Kode program dapat dilihat <a href="code/soil_1/soil_1.ino">di sini</a> dan <a href="code/soil_2/soil_2.ino">di sini</a>

### c. Hasil dan Pembahasan
Percobaan ini merupakan simulasi pengambilan data dari sensor Capacitive Soil Moisture. Sensor ini berfungsi untuk mengukur tingkat kelembaban tanah. Fungsi utama dari sensor ini adalah untuk memberikan informasi tentang seberapa basah atau kering tanah di suatu area tertentu. Sensor ini mendeteksi kelembaban tanah dengan cara mengukur kapasitansi dielektrik tanah.
Digunakan juga 3-Way Meter untuk mengukur parameter kelembaban dalam tanah pada kondisi tanah kering, medium, dan basah. Kemudian, kode program yang dijalankan berguna untuk membaca data dari sensor analog pada pin input dan menghitung rata-rata dari beberapa pembacaan yang kemudian dicetak ke Serial Monitor. Proses konversi melibatkan membagi nilai rata-rata dengan jumlah nilai oleh ADC (Analog-to-Digital Converter) sehingga muncul nilai rata-rata.

##### Tanpa Tanah

![tanpa-tanah](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/86c9655f-2bcb-4199-ba62-7dfdc07f65d8)
<br>
<br>

##### Tanah Kering

![tanah-kering](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/311e5c70-8215-4601-aa71-cdf693492ea5)
<br>
<br>

##### Tanah Medium

![tanah-medium](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/7d0e1e15-7469-4d17-8fe6-f787a3a8c6f7)
<br>
<br>

##### Tanah Basah

![tanah-basah](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/c32eec94-02bb-4e84-94cb-99262e31fc7c)
<br>
<br>

##### Hasil Tabel

![hasil-tabel](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/472e4abd-4b12-4a80-a694-464f67e0f86c)
Pada hasil tabel diatas dapat dilihat bahwa nilai pembacaan ADC pada tanah kering > tanah medium > tanah basah <br>
Begitupula nilai rata-rata Vs yang didapat pada tanah kering > tanah medium > tanah basah <br>
Sebaliknya, nilai pembacaan 3-Way Meter menunjukkan tanah kering < tanah medium < tanah basah
