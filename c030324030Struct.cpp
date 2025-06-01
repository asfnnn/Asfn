#include <iostream>
#include <string>
using namespace std;

    struct mahasiswa{
	string nim;
	string nama;
	string alamat;
	float ipk;
};

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";          getline(cin, *nim);
    cout << "Nama = ";         getline(cin, *nama);
    cout << "Alamat = ";       getline(cin, *alamat);
    cout << "IPK = ";          cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasiswa &Asfn) {
    system("cls");
    cout << "\n------------- Data Pribadi ------------- :\n";
    cout << "NIM    : " << Asfn.nim << endl;
    cout << "Nama   : " << Asfn.nama << endl;
    cout << "Alamat : " << Asfn.alamat << endl;
    cout << "IPK    : " << Asfn.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasiswa Asfn;
    inputData(&Asfn.nim, &Asfn.nama, &Asfn.alamat, &Asfn.ipk);
    outputData(Asfn);
    return 0;
}