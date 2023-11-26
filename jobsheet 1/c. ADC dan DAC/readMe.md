# C. ADC (Analog to Digital Converter) dan DAC (Digital to Analog Converter)

## 1. ADC dan DAC | Membaca Nilai Analog dari Potensiometer

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![image](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/3279637f-7688-456e-a4bb-89e044cd3441)

### b. Source Code
Kode program dapat dilihat <a href="1.%20rangkaian/adc_1/adc_1.ino">di sini</a>

### c. Hasil dan Pembahasan
Percobaan ini adalah membaca nilai potensiometer yang terhubung ke pin GPIO 34 (ADC1_CH6) dan kemudian mencetak nilai tersebut ke Serial Monitor setiap 500 milidetik.
Output yang terlihat pada Serial Monitor akan berupa deretan nilai-nilai potensiometer yang berkisar antara 0 hingga 4095 (karena ADC pada ESP32 memiliki resolusi 12-bit).
Ketika potensiometer diputar ke arah tertentu, (misalnya ke arah kanan) maka nilai akan menjadi semakin besar. Sebaliknya, ketika diputar ke arah yang berlawanan (arah kiri) maka nilainya akan menadi semakin kecil.

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/a596a4fa-97c4-45cd-90c5-0fd77c692dda


## 2. ADC dan DAC | Mengatur Kecerahan LED Menggunakan Potensiometer

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![board-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/82d56248-c94e-44be-bc76-d5f626f477ca)

### b. Source Code
Kode program dapat dilihat <a href="2.%20tugas/adc_2/adc_2.ino">di sini</a>

### c. Hasil dan Pembahasan
Output dari program ini akan mencetak nilai pembacaan dari potensiometer (sensorValue) dan nilai keluaran yang diatur pada LED menggunakan PWM (outputValue). Output ini akan ditampilkan pada Serial Monitor dengan format "sensor = [nilai_sensor] output = [nilai_output]".
Nilai sensor berkisar antara 0 hingga 4095 karena ADC pada ESP32 memiliki resolusi 12-bit, sedangkan nilai output telah dipetakan ke rentang 0 hingga 255 menggunakan fungsi map. Output ini mencerminkan bagaimana perubahan posisi potensiometer mempengaruhi nilai keluaran PWM analog yang dikirim ke LED.
Ketika potensiometer diputar ke arah kanan sehingga nilainya semakin besar, LED akan menyala semakin terang. Sebaliknya, ketika potensiometer diputar kearah berlawanan (kiri) dan nilai pembacaan menjadi semakin kecil maka nyala LED akan semakin redup.

https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/078d05c2-ceb7-45ce-be98-aaf8ffcfc0ed
