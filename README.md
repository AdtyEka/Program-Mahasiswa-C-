# Program Manajemen Mahasiswa

## Deskripsi
Program ini memungkinkan pengguna untuk mengelola data mahasiswa, termasuk memasukkan data, mencari mahasiswa berdasarkan NIM atau nama, memperbarui IPK, dan menganalisis data mahasiswa. Program ini juga mengurutkan mahasiswa berdasarkan IPK dalam urutan menurun.

## Fitur
1. **Input Data Mahasiswa** - Pengguna dapat memasukkan NIM, nama, dan IPK mahasiswa.
2. **Validasi IPK** - Program memastikan bahwa IPK yang dimasukkan berada dalam rentang 0 hingga 4.
3. **Sorting** - Mengurutkan mahasiswa berdasarkan IPK dari tertinggi ke terendah.
4. **Update IPK** - Pengguna dapat memperbarui IPK mahasiswa berdasarkan urutan input.
5. **Pencarian Mahasiswa**
   - Berdasarkan NIM
   - Berdasarkan nama (tidak peka terhadap huruf besar/kecil)
6. **Analisis Data** - Fitur untuk menganalisis data mahasiswa.

## Cara Penggunaan
1. Jalankan program.
2. Masukkan jumlah mahasiswa.
3. Masukkan data mahasiswa satu per satu.
4. Pilih opsi yang tersedia:
   - Update IPK mahasiswa
   - Cari mahasiswa berdasarkan NIM atau nama
   - Lakukan analisis data
5. Program akan terus berjalan hingga pengguna memilih keluar.

## Struktur Program
- **`main.cpp`** - Berisi logika utama program.
- **`header.h`** - Berisi deklarasi kelas dan fungsi.
- **Kelas `Mhs`** - Menyimpan data mahasiswa dan memiliki metode untuk manipulasi data.

## Perbaikan Terbaru
- **Pencarian berdasarkan nama tidak peka terhadap huruf besar/kecil**
  - Nama yang dimasukkan dikonversi ke huruf kecil sebelum pencarian.

## Kompilasi dan Eksekusi
Gunakan perintah berikut untuk mengompilasi program:
```sh
 g++ main.cpp -o program
```
Kemudian jalankan dengan:
```sh
 ./program
```

## Kontributor
- Developer: [Nama Anda]
- Bahasa Pemrograman: C++

