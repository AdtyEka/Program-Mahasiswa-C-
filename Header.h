#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <algorithm>
using namespace std;

class Mhs{

    private:

    string nim, nama;   // atribute
    float ipk;

    public:             // behavior

    void input();
    void cetak();
    string getNim();    // karena pribat memerlukan getter
    string getNama();
    float getIpk();
    void setIpk(float iipk);
};

void sortingIpkDesc(Mhs m[], int n);
void cetakSemuaMhs(Mhs m[], int n);
bool searchNim(string k, int n, Mhs m[]);
float cariIpkDariNama(string k,int n, Mhs m[]);
void analisaMhs(Mhs m[], int n);
void identitas();

#endif // HEADER_H_INCLUDED
