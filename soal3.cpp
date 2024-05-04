#include <iostream>
using namespace std;

int main() {
    char ulang;
    do {
        system("CLS");
        
        unsigned long long int angka;
        int jumlah = 0;
        cout << "====================================================" << endl;
        cout << "##  Program Cari Angka Prima dan Menjumlahkannya  ##" << endl;
        cout << "====================================================" << endl;
        cout << endl;

        cout << "Masukkan Angka: ";
        cin >> angka;
        cout << endl;

        if (angka >= ULLONG_MAX) { 
            cout << "Program tidak dapat berjalan. Anda terlalu banyak memasukkan angka." << endl;
            cout << endl;
            break;
        }
        else {
            cout << "Angka prima yang terdapat pada angka tersebut adalah ";
            while (angka > 0) {
                int digit = angka % 10;
                bool prima = true;
                if (digit <= 1) {
                    prima = false;
                } 
                else {
                    for (int i = 2; i * i <= digit; ++i) {
                        if (digit % i == 0) {
                            prima = false;
                            break;
                        }
                    }
                }
                if (prima) {
                    cout << digit << " ";
                    jumlah += digit;
                }
                angka /= 10;
            }
            cout << endl;
            cout << "Jumlah bilangan prima: " << jumlah << endl;
            cout << endl;
        }
        cout << "Apakah anda ingin mengulang perhitungan (Y/T)?: ";
        cin >> ulang;
        cin.ignore();
        cout << endl;
    } while (ulang == 'Y' || ulang == 'y');

    cout << "Terima kasih telah menggunakan program ini." << endl;
    system("pause");
    return 0;
}
