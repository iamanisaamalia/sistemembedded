# C. Mengirim Data JSON ke Server dan Menyimpannya ke Database

### a. Rangkaian

Rangkaian pada percobaan kali ini adalah sebagai berikut

![langkah-3](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/3cddfba9-d1ad-4c11-82e8-706440239040)

### b. Hasil dan Pembahasan

Percobaan kali ini adalah mengirim data JSON ke Server melalui Postman. Setelah membuat flow rangkaian pada Node-Red dan menekan Deploy, selanjutnya Postman akan mengirimkan data berupa `dev_id`, `rainfall`, dan `level` yang dikirimkan ke `/sensor/node7`.
Kemudian, data yang berhasil dikirim dapat dilihat pada Debug Node-Red. Hasil percobaan dapat dilihat pada gambar berikut.

- Postman

  ![hasil-3-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/4fbae645-0dfe-4956-bbef-702cce8e7ea6)

- Debug

  ![hasil-3-1](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/13d8ec5b-cde3-4654-83f9-c354b24e8f53)
