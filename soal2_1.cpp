#include <iostream>
#include <string>
#include <locale> // Library untuk fungsi toupper()

using namespace std;

int main() {
    char ulang; // Variabel untuk menyimpan pilihan ulang

    // Perulangan do-while untuk memungkinkan pengguna mengulangi konversi
    do {
        system("CLS"); // Membersihkan layar konsol

        // Menampilkan judul program
        cout << "==================================================" << endl;
        cout << "##    Program Konversi Kalimat ke Huruf Besar   ##" << endl;
        cout << "==================================================" << endl;
        cout << endl;

        string kalimat; // Variabel untuk menyimpan kalimat yang dimasukkan pengguna
        cout << "Masukkan sebuah kalimat: ";
        getline(cin, kalimat); // Membaca input kalimat dari pengguna

        // Looping untuk mengonversi setiap karakter kalimat menjadi huruf besar
        for (int i = 0; i < kalimat.length(); i++) {
            kalimat[i] = toupper(kalimat[i]); // Menggunakan fungsi toupper() untuk mengubah karakter menjadi huruf besar
        }
        
        // Menampilkan hasil konversi
        cout << "Hasil konversi: " << kalimat << endl; 

        // Meminta pengguna untuk memilih apakah ingin mengulangi perhitungan atau tidak
        cout << "Apakah anda ingin mengulang perhitungan (Y/T)?: ";
        cin >> ulang;
        cin.ignore(); // Membersihkan buffer input
        
    } while (ulang == 'Y' || ulang == 'y'); // Melakukan perulangan jika pengguna ingin mengulangi

    // Pesan terima kasih setelah keluar dari loop
    cout << "Terima kasih telah menggunakan program ini." << endl;

    // Menunggu pengguna menekan tombol sebelum menutup program
    system("pause");

    return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program berakhir dengan sukses
}
