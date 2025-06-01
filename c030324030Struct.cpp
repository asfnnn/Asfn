#include "conio.h"
#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

struct mahasiswa
{
    float ipk;
    string nim;
    string nama;
    string alamat;
    string jurusan;
    string kelas;
};


int main() {
    struct mahasiswa asd;
    asd.ipk = 3.73;
    asd.nim = "C030324030";
    asd.nama = "asd";
    asd.alamat = "Bunyamin";
    asd.jurusan = "TI";
    asd.kelas = "Kelas 2B";
    

    cout << "NIM: " << asd.nim << endl;
    cout << "IPK: " << asd.ipk << endl;
    cout << "Nama: " << asd.nama << endl;
    cout << "Alamat: " << asd.alamat << endl;
    cout << "Jurusan: " << asd.jurusan << endl;
    cout << "Kelas: " << asd.kelas << endl;
}