#include <iostream>
using namespace std;

int main() {
    char ulang;
    do {
        system("CLS");

        long int detik, menit, jam, sisa_detik;
        cout << "==========================================================================" << endl;
        cout << "##   Program Input Waktu dalam Detik dan Mengembalikan Waktu HH:MM:SS   ##" << endl;
        cout << "==========================================================================" << endl;
        cout << endl;
        
        cout << "Masukkan jumlah detik: "; 
        cin >> detik;
        cout << endl;

        if (detik < 0 ) {
            cout << "Program tidak dapat berjalan, Anda memasukkan angka negatif." << endl;
        }
        else if (detik > 356400) { 
            cout << "Program tidak dapat berjalan. Anda terlalu banyak memasukkan angka." << endl;
        }
        else {
            jam = detik / 3600;
            sisa_detik = detik % 3600;
            menit = sisa_detik / 60;
            detik = sisa_detik % 60;

            cout << "===============" << endl ;
            cout << "Waktu: ";
            if (jam < 10)
                cout << "0";
            cout << jam << ":";
            if (menit < 10)
                cout << "0";
            cout << menit << ":";
            if (detik < 10)
                cout << "0";
            cout << detik << endl;
            cout << "===============" << endl;
        }
        cout << endl;
        cout << "Apakah anda ingin mengulang perhitungan (Y/T)?: ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'Y' || ulang == 'y');

    cout << "Terima kasih telah menggunakan program ini." << endl;
    system("pause"); 
    return 0; 
}
