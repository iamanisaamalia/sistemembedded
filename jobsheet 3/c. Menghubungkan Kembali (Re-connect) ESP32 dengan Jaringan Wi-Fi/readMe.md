# C. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/883ce85e-5f2e-455d-9925-d4a828eb0a4d)

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/iamanisaamalia/sistemembedded/blob/main/jobsheet%203/c.%20Menghubungkan%20Kembali%20(Re-connect)%20ESP32%20dengan%20Jaringan%20Wi-Fi/reconnect/reconnect.ino">di sini</a>

### c. Hasil dan Pembahasan
Sistem auto reconnect ini merupakan pengembangan dari sistem connect sebelumnya. Perbedaanya terdapat perkondisian untuk mendeteksi jaringan di dalam fungsi loop. Setelah ESP dideteksi terputus dari jaringan, maka setiap beberapa "jeda waktu" ESP akan mencoba menghubungkan ulang ke jaringan yang sebelumnya telah terhubung, dalam hal ini telah ditulis SSID dan password pada tahap sebelumnya.


https://github.com/iamanisaamalia/sistemembedded/assets/147674408/f7073511-d3f4-4f07-ac42-d4a032ae2b64





### d. Flowchart
![flow-3c](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/4adcd0a7-0c79-449b-9ec0-a337dce69c0e)
