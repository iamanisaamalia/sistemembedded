# B. Menghubungkan ESP32 dengan Jaringan Wi-Fi
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/b.%20Menghubungkan%20ESP32%20dengan%20Jaringan%20Wi-Fi/connect_ke_wifi/connect_ke_wifi.ino">di sini</a>

### c. Hasil dan Pembahasan
Di sini ESP bertindak sebagai station atau client dari sebuah jaringan/AP yang ada. Sehingga SSID dan password dari jaringan harus diketahui agar ESP dapat terhubung. Pada coding dilakukan looping untuk pengecekan apakah ESP sudah terkoneksi dengan jaringan. Jika sudah terkoneksi, maka akan muncul IP address yang didapatkan ESP seperti pada hasil di bawah yaitu 192.168.37.229.

#### Menghubungkan ESP32 dengan Jaringan Wi-Fi | Proses menghubungkan jaringan

https://github.com/iamanisaamalia/sistemembedded/assets/147674408/47182e9c-6445-4937-875b-fd5e3c8d7f94


#### Menghubungkan ESP32 dengan Jaringan Wi-Fi | ESP32 berhasil terhubung dan mendapatkan IP Address



https://github.com/iamanisaamalia/sistemembedded/assets/147674408/42c0c6ab-56a9-4b84-ac21-a50b06ea3d90


![hasil-2-3](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/a751ad59-f3cf-47c3-a82c-c57dc85b13fb)


### d. Flowchart
![flow-3b](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/f4ef0380-f2c2-46d9-ac3c-130b987e7601)
