#include <iostream>
using namespace std;

int main() {
    int score;
    string nama;
    char predikat;

    cout << "Ketik 'exit' untuk keluar" << endl;
    cout << "Nama Mahasiswa : " << endl;
    cin >> nama;

    cout << "Masukkan nilai (100 - 0) : " << endl;
    cin >> score, keluar;

    if (score >= 90) {
        predikat = 'A';
    } else if (score >= 80) {
        predikat = 'B';
    } else if (score >= 70) {
        predikat = 'C';
    } else if (score >= 60) {
        predikat = 'D';
    } else {
        predikat = 'E';
    }

    cout << "Selamat! " << nama << " mendapatkan nilai " << predikat << endl;

    return 0;
}
