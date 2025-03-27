#include "header.h"

// pustaka cpp
void Mhs::input (){
    cout<<"Masukkan Nim     = "; cin >> nim;
    cout<<"Masukkan Nama    = "; cin >> nama;
    cout<<"Masukkan IPK     = "; cin >> ipk;
}

void Mhs::cetak (){
    cout<<"Nim  =   "<< nim << endl;
    cout<<"Nama =   "<< nama << endl;
    cout<<"IPK  =   "<< ipk << endl;
}

string Mhs::getNim(){
    return nim;
}

string Mhs::getNama(){
    return nama;
}

float Mhs::getIpk(){
    return ipk;
}

void Mhs::setIpk(float iipk){
    ipk = iipk;
}

void sortingIpkDesc(Mhs m[], int n){
    //Bubble Short
    int i,j;
    Mhs temp;
    for (i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(m[j].getIpk() < m[j+1].getIpk()){
                temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }
}

void cetakSemuaMhs(Mhs m[], int n){
    cout << "Urutan Terbaru" << endl;
    cout << "| NO | NIM \t\t| NAMA \t\t\t | IPK \t|" << endl;
    for(int i=0; i<n;i++){
        cout << "| " << i+1 << "  | " << m[i].getNim() << " \t\t| " << m
        [i].getNama() << " \t\t | " << m[i].getIpk() << " \t|" << endl;
    }
}

bool searchNim(string k, int n, Mhs m[]){
    bool found = false;
    for (int i = 0; i<n; i++){
        if(m[i].getNim()==k){
            found = true;
            break;
        }
    }
    return found;
}

float cariIpkDariNama(string k, int n, Mhs m[]){
    float ipk_dicari = -1;
    transform(k.begin(), k.end(), k.begin(), ::tolower);
    for (int i = 0; i<n; i++){
        string nama_mhs = m[i].getNama();
        transform(nama_mhs.begin(), nama_mhs.end(), nama_mhs.begin(), ::tolower);
        if(nama_mhs == k){
            ipk_dicari = m[i].getIpk();
            break;
        }
    }
    return ipk_dicari;
}

void analisaMhs(Mhs m[], int n){
    float nMax = 0, nMin = 100, jml = 0, nRata;
    int iMax, iMin;
    for (int i=0; i<n; i++){
        jml += m[i].getIpk();
        if(m[i].getIpk() > nMax){
            nMax = m[i].getIpk();
            iMax = i;
        }
        if(m[i].getIpk() < nMax){
            nMin = m[i].getIpk();
            iMin = i;
        }
    }
    cout << "==============================================================" << endl;
    cout << "Analisa Berdasarkan Niali IPK" << endl;
    cout << "IPK Tertinggi = " << nMax << " Di Peroleh Mahasiswa " << m[iMax].getNama() << endl;
    cout << "IPK Terendah = "<< nMin << " Di Peroleh Mahasiswa " << m[iMin].getNama() <<  endl;
    nRata = jml/n;
    cout << "IPK Rata - Rata = " << nRata << endl;
    cout << "==============================================================" << endl;

}

void identitas(){
    cout << "============ Program Pertemuan 5 ==============" << endl;
    cout << "|            Aditya Eka Narayan               |" << endl;
    cout << "|               A11.2024.15940                |" << endl;
    cout << "===============================================" << endl;

}
