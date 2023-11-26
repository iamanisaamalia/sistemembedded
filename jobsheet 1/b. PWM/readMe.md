# B. PWM (Pulse Width Modulation)

## 1. PWM | Mengatur kecerahan sebuah LED

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/440158fe-9b2e-45b4-9a72-823061348dd1)

### b. Source Code
Kode program dapat dilihat <a href="1.%20rangkaian%201/pwm_1/pwm_1.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, yang terjadi adalah LED akan mengalami perubahan kecerahan dari 0 hingga 255 dalam loop pertama. Kemudian, LED akan mengalami perubahan kecerahan dari 255 kembali ke 0 dalam loop kedua. Proses ini akan terus berulang selama program berjalan.
Sehingga output visualnya adalah LED yang berkedip dengan kecepatan tertentu, dengan tingkat kecerahan yang berubah-ubah sesuai dengan perubahan nilai PWM.

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/ff208001-de2e-4ab6-bf60-22c7b2c5875d

## 2. PWM | Mengatur kecerahan 3 buah LED

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/440158fe-9b2e-45b4-9a72-823061348dd1)

### b. Source Code
Kode program dapat dilihat <a href="2.%20rangkaian%202/pwm_2/pwm_2.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, tidak hanya satu LED yang dikontrol, tetapi ada tiga LED yang dikontrol melalui pin GPIO16 (ledPin), GPIO17 (ledPin2), dan GPIO5 (ledPin3).
Output visualnya sama seperti sebelumnya, yaitu ketiga LED berkedip dengan kecepatan tertentu, dengan tingkat kecerahan yang berubah-ubah sesuai dengan perubahan nilai PWM.

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/8df786c4-250f-41d7-bd61-91dccf3bdd16
