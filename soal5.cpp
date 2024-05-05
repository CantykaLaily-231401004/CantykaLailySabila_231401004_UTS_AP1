#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS"); 

    string kata_kunci;
    cout << "Ini adalah pesan -rahasia- yang hanya bisa dilihat jika kata kunci benar." << endl;

    cout << "Masukkan kata kunci: ";
    cin >> kata_kunci;

    if (kata_kunci == "rahasia") {
        cout << "Kata kunci benar!" << endl;
        cout << "Pesannya adalah: " << endl;
        cout << "=======================================================================================================" << endl;
        cout << "Menurut saya, pengajaran yang disampaikan oleh Bang Frederick Godiva di Laboratorium 1 Algoritma dan " <<endl;
        cout << "Pemrograman sangat baik. Bang Frederick menjelaskan materi yang diajarkan dengan jelas disertai dengan " << endl;
        cout << "contoh-contoh yang sangat membantu dalam pemahaman. Selain itu, Bang Frederick juga memastikan " << endl;
        cout << "kami paham dengan mengecek kami satu per satu. Dengan kesabaran dan interaktifitasnya, Bang Frederick " << endl;
        cout << "membuat materi jadi lebih mudah dipahami. Ia juga selalu membantu jika kami mengalami kesulitan atau " << endl;
        cout << "error dalam menyelesaikan tugas atau proyek yang diberikan. Terima kasih, Bang." << endl;
        cout << endl;
        cout << "Suasana di laboratorium juga sangat interaktif dan kondusif saat belajar, hal ini membuat saya merasa " << endl;
        cout << "nyaman dan lebih termotivasi untuk belajar. Ruangan dan fasilitas yang memadai juga menjadi pendukung " << endl;
        cout << "suasana kelas yang nyaman." << endl;
        cout << "=======================================================================================================" << endl;
    } 
    else {
        cout << "Kata kunci salah. Pesan rahasia tidak bisa dilihat." << endl;
    }
    return 0;
}
