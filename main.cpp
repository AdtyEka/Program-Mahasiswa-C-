#include "header.h"

int main()
{
    Mhs mm[40];
    int jml_mhs;

    identitas();

    cout << "Masukkan Jumlah Mahasiswa = " ;
    cin >> jml_mhs;

    for(int i = 0; i < jml_mhs; i++){
        cout << i+1 << ". Mahasiswa ke - " << i+1 << endl;
        mm[i].input();

        // Validasi input IPK
        while(mm[i].getIpk() < 0 || mm[i].getIpk() > 4){
            cout << "IPK harus antara 0 hingga 4. Masukkan kembali: ";
            float newIpk;
            cin >> newIpk;
            mm[i].setIpk(newIpk);
        }
    }

    cetakSemuaMhs(mm, jml_mhs);

    sortingIpkDesc(mm, jml_mhs);

    cout << "Setelah Iterasi Sorting" << endl;
    cetakSemuaMhs(mm, jml_mhs);

    int pil, urutan;
    float ipk_baru;
    char lanjut;
    string cari_nim, hasil_cari_nim, nama_mhs;

    do {
        cout << "\nPilihan\n1. Update IPK berdasarkan Urutan\t3. Cari IPK Mahasiswa Berdasarkan Nama\n";
        cout << "2. Cari Mahasiswa berdasarkan NIM\t4. Analisa\nMasukkan Pilihan = ";
        cin >> pil;

        if (pil == 1) {
            cout << "Masukkan urutan = " ; cin >> urutan;
            urutan--;

            do {
                cout << "Masukkan IPK Antara 0 Sampai 4 = ";
                cin >> ipk_baru;
                if (ipk_baru < 0 || ipk_baru > 4) {
                    cout << "IPK tidak valid! Harus antara 0 hingga 4." << endl;
                }
            } while (ipk_baru < 0 || ipk_baru > 4);

            mm[urutan].setIpk(ipk_baru);
            cetakSemuaMhs(mm, jml_mhs);
        } else if (pil == 2) {
            cout << "Masukkan NIM Mahasiswa Yang Dicari = ";
            cin >> cari_nim;
            hasil_cari_nim = (searchNim(cari_nim, jml_mhs, mm) == 1) ? "ada" : "tidak ada";
            cout << "Mahasiswa " << cari_nim << " " << hasil_cari_nim << endl;
        } else if (pil == 3) {
            cout << "Masukkan Nama Mahasiswa Yang Dicari = ";
            cin >> nama_mhs;
            cout << "IPK " << nama_mhs << " = " << cariIpkDariNama(nama_mhs, jml_mhs, mm) << endl;
        } else if (pil == 4) {
            analisaMhs(mm, jml_mhs);
        } else {
            cout << "Inputan Salah" << endl;
        }

        cout << "Apakah ingin melanjutkan ( y / n )? ";
        cin >> lanjut;
    } while (lanjut == 'y');

    return 0;
}
