# D. Mengganti Hostname ESP32
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/d.%20Mengganti%20Hostname%20ESP32/3d_ganti_hostname/3d_ganti_hostname.ino">di sini</a>

### c. Hasil dan Pembahasan
Hostname merupakan identitas perangkat yang dipakai oleh ESP32. Hostname akan muncul ketika ESP terhubung ke suatu jaringan, maka pemilik jaringan tersebut (AP) dapat melihat identitas dari perangkat yang terhubung, dalam hal ini adalah hostname dari ESP. ESP harus mendeklarasikan hostnamenya dengan perintah  `WiFi.setHostname()` sebelum melakukan koneksi ke jaringan.
mengganti hostname ESP32 yang diawali dengan upload program ke ESP32 seperti yang ada pada jobsheet kemudian dilanjutkan dengan membuka serial monitor dan mengaktifkan mode koneksi WiFi pada smartphone atau laptop, lalu melakukan scan dan melihat daftar jaringan WiFi yang tersedia, dengan menggunakan  `WiFi.setHostname()`, kami dapat menetapkan nama host untuk ESP32 Anda yang akan muncul di jaringan Wi-Fi. dan dokumentasi berupa hostname yang berubah.


https://github.com/iamanisaamalia/sistemembedded/assets/147674408/93058440-7975-4c43-b81b-688635de2f7e





### d. Flowchart
![flow-3d](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/5def1b32-fb02-4d03-8196-cb031d0fffd7)
