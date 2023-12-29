# B. Transmisi Data Menggunakan Protokol HTTP

## 1. Metode GET

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f56bbb5b-d7e8-4096-8fe4-532f7e4356a0)

### b. Source Code
Kode program dapat dilihat <a href="4b_http/4b_http.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada percobaan ini, langkah pertama yang dilakukan adalah membuat database `banjir_db` dan diisi dengan tabel `smartwater`. Struktur dalam tabel mengikuti panduan jobsheet.
Install terlebih dahulu node-red-dashboard pada bagian manage pallette kemudian import kode JSON Multi-Protocol IoT Server ke Node-Red untuk menampilkan flow rangkaian.
Kemudian, install libraru JSON5 pada Arduino dan upload program protokol HTTP dengan metode GET. Setelah berhasil diupload, klik Deploy pada Node-Red.
Hasil percobaan dapat dilihat pada Serial Monitor Arduino, Debug Node-Red, dan juga Dashboard Node-Red. Hasil akan terlihat seperti berikut.

- Serial Monitor
  
  ![serial](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/37b406dc-8481-4985-93a9-e03bb0801cec)

- Debug
  
  ![debug](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/7cbc3094-808f-4644-9d45-1a86b8c8bb1d)

- Dashboard
  
  ![dashboard](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/c3e9955b-65db-4cac-9939-4f0f6fc6db7d)

### d. Flowchart

![flow](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/33b622a6-0511-49e1-bb87-69b84b2d794c)


## 2. Metode POST

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/f56bbb5b-d7e8-4096-8fe4-532f7e4356a0)

### b. Source Code
Kode program dapat dilihat <a href="4b_http_post/4b_http_post.ino">di sini</a>

### c. Hasil dan Pembahasan
Pada bagian ini yang membedakan adalah metode protokol HTTP yang digunakan. Jika sebelumnya menggunakan metode GET, pada bagian ini menggunakan metode POST.
Setelah program berhasil diupload, output yang ditampilkan adalah sebagai berikut.

- Serial Monitor
  
  ![post-serial](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/efd9f501-7e3d-45c4-a5f3-1557364b2177)
  
- Debug
  
  ![post-debug](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/72b2bb96-d0a9-4c92-890c-e25f854f26b5)

- Dashboard
  
  ![post-dashboard](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/836f24ea-59c5-40e4-aa69-5c15bf3cbfce)

### d. Flowchart

![post-flow](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/925c6292-663c-4292-aa8e-800e24f08647)
