#include <iostream>
using namespace std;

int main() {
    int pilih;
    float luas;
    while (true) {
        cout << "\nKetik angka (1-3) untuk hitung luas dari : " << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Keluar dari program" << endl;
        cout << "===================" << endl;
        cin >> pilih;

        switch (pilih) {
            case 1:
                float sisi;
                cout << "\n= Perhitungan Luas Persegi =\n" << endl;
                cout << "Masukkan nilai sisi (cm) : ";
                cin >> sisi;
                luas = sisi * sisi;

                cout << "Panjang sisi (cm) : " << sisi << " cm" << endl;
                cout << "Luas persegi: \n= s x s\n= " << sisi << " x " << sisi << "\n= " << luas << " cm2" << endl;
                break;
            case 2:
                float panjang, lebar;
                cout << "\n= Perhitungan Luas Persegi Panjang =\n" << endl;
                cout << "Masukkan nilai panjang (cm) : ";
                cin >> panjang;
                cout << "Masukkan nilai lebar (cm) : ";
                cin >> lebar;
                luas = panjang * lebar;

                cout << "Panjang (p) : " << panjang << " cm" << endl;
                cout << "Lebar (l) : " << lebar << " cm" << endl;
                cout << "Luas persegi panjang : \n= p x l\n= " << panjang << " x " << lebar << "\n= " << luas << " cm2" << endl;
                break;
            case 3:
                float tinggi, alas;
                cout << "\n= Perhitungan Luas Segitiga =\n" << endl;
                cout << "Masukkan nilai alas (cm) : " ;
                cin >> alas;
                cout << "Masukkan nilai tinggi (cm) : " ;
                cin >> tinggi;
                luas = 0.5 * alas * tinggi;

                cout << "Alas (a) : " << alas << " cm" << endl;
                cout << "tinggi (t) : " << tinggi << " cm\n" << endl;
                cout << "Luas segitiga : \n= 1/2 x a x t\n= 1/2 x " << alas << " x " << tinggi << "\n= " << luas << " cm2" << endl;
                break;
            case 4:
                cout << endl;
                cout << "Anda keluar dari program" << endl;
                return 0;
                break;
            default:
                cout << "Pilih Angka sesuai instruksi! " << endl;
                return 0;
                break;
        }
    }



    return 0;
}
