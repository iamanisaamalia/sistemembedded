# A. GPIO (General Purpose Input-Output)

## 1. GPIO | LED Blink

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/05bc96b4-6c4e-4b25-a56e-471421ace2af)

### b. Source Code
Kode program dapat dilihat <a href="1.%20LED%20blink/led_blink/led_blink.ino">di sini</a>

### c. Hasil dan Pembahasan
Dengan mengatur nilai `delay()` dan `millis()`, LED dapat berkedip dengan 4 interval yang berbeda, yaitu 1 detik (1000ms), 2 detik (2000ms), 3 detik (3000ms), dan 0.1 detik (100ms)

##### LED Blink setiap 1 detik
https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/934b009b-4ebf-40ac-9357-2a9370dd5250

##### LED Blink setiap 2 detik
https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/0a4df68c-1c49-4245-804e-2793480bcf57

##### LED Blink setiap 3 detik
https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/cf1a0a8c-339b-439c-9b44-e4aee2c6ae58

##### LED Blink setiap 100ms
https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/a2237161-5230-42ab-badb-059481823450


## 2. GPIO | pushbutton1 - LED menyala saat push button ditekan

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/05bc96b4-6c4e-4b25-a56e-471421ace2af)

### b. Source Code
Kode program dapat dilihat <a href="2.%20mengendalikan%20led%20menggunakan%20push%20button/gpio_2/gpio_2.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah ketika pushbutton ditekan, maka lampu LED akan menyala. Sedangkan saat push button dilepas, LED akan kembali mati

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/c6ef4a13-0d63-4c76-9393-50ae7c4e6aa5


## 3. GPIO | pushbutton2 - LED blink saat push button ditekan

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![board-3](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/39793e78-e7ff-4305-83a4-775ce0f7ef80)

### b. Source Code
Kode program dapat dilihat <a href="3.%20Tambahkan%201%20LED%20dan%201%20push%20button%20pada%20rangkaian%2C%20blink%20setiap%20500ms/gpio_3/gpio_3.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah ketika pushbutton kedua ditekan, maka lampu LED akan berkedip (blink) setiap 500ms. Lalu ketika push button dilepas, LED akan mati

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/ac34bc74-ecbb-4e58-a2e3-33f7c9f9569d


## 4. GPIO | pushbutton3 - LED menyala dari kiri ke kanan berurutan saat pushbutton ditekan

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![board-4](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/918f3bf9-c527-4781-9d29-8f51ffb01928)

### b. Source Code
Kode program dapat dilihat <a href="4.%20Tambahkan%203%20LED%20dan%201%20push%20button%20pada%20rangkaian/gpio_4.1/gpio_4.1.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah ketika pushbutton ketiga ditekan, maka ketiga lampu LED akan menyala dari kiri ke kanan secara berurutan (running LED). Sedangkan jika pushbutton dilepas, maka ketiga LED akan mati

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/cdf8f68a-3269-430f-8bab-93e58803cce7

