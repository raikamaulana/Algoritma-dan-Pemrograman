#include <iostream>
using namespace std;

int main(){
    int angka1, angka2, angka3;

    cout << "Masukkan angka ke 1 : " << endl;
    cin >> angka1;
    cout << "Masukkan angka ke 2 : " << endl;
    cin >> angka2;
    cout << "Masukkan angka ke 3 : " << endl;
    cin >> angka3;

    if (angka1 > angka2 && angka1 > angka3){
        cout << "Angka ke 1 : " << angka1 << " lebih besar" << endl;
    } else if (angka2 > angka1 && angka2 > angka3){
        cout << "Angka ke 2 : " << angka2 << " lebih besar" << endl;
    } else if (angka3 > angka2 && angka3 > angka1){
        cout << "Angka ke 3 : " << angka3 << " lebih besar" << endl;
    }

    return 0;
}
