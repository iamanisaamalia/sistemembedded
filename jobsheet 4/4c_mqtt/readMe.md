# C. Transmisi Data Menggunakan Protokol MQTT

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f56bbb5b-d7e8-4096-8fe4-532f7e4356a0)

### b. Source Code
Kode program dapat dilihat <a href="4c_mqtt/4c_mqtt.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, protokol yang digunakan adalah protokol MQTT. Server broker yang digunakan adalah EMQX. 
EMQX adalah sebuah server broker yang dirancang khusus untuk mengelola dan mendukung protokol komunikasi publikasi-berlangganan (publish-subscribe) seperti MQTT (Message Queuing Telemetry Transport) untuk mendukung komunikasi efisien antar perangkat dalam jaringan IoT (Internet of Things).
Setelah program berhasil diupload, data dummy seperti dev_id, level, rainfall, dan flow akan dipublish ke `flood/node1`. Output yang ditampilkan adalah sebagai berikut.

- Serial Monitor
  
  ![serial](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/102d82bf-cb0a-4fbd-818f-29d11005dd05)

- Debug

  ![debug](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/966b2de8-7be2-4be3-aec5-452bed3f0194)

- Dashboard

  ![dashboard](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/bc9a91c8-33f4-4508-a8a4-6f6b409573c9)

### d. Flowchart

![flow](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/65e55323-406b-41c5-8620-128199eaa535)
