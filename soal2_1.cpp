#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    char ulang;  
    do {
        system("CLS");
        cout << "==================================================" << endl;
        cout << "##    Program Konversi Kalimat ke Huruf Besar   ##" << endl;
        cout << "==================================================" << endl;
        cout << endl;

        string kalimat;
        cout << "Masukkan sebuah kalimat: ";
        getline(cin, kalimat); 

        for (int i = 0; i < kalimat.length(); i++) {
            kalimat[i] = toupper(kalimat[i]);
        }
        cout << "Hasil konversi: " << kalimat << endl; 
        cout << endl;

        cout << "Apakah anda ingin mengulang perhitungan (Y/T)?: ";
        cin >> ulang;
        cin.ignore();
        cout << endl;
    } while (ulang == 'Y' || ulang == 'y');
    
    cout << "Terima kasih telah menggunakan program ini." << endl;
    system("pause"); 
    return 0; 
}
