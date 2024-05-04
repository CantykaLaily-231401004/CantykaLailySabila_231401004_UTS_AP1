#include <iostream> // bladnasjdbskdjfbkdjf
#include <string>

using namespace std;

int main() {
    system ("CLS");
    string kata_kunci;
    cout << "Ini adalah pesan -rahasia- yang hanya bisa dilihat jika kata kunci benar.\n";

    cout << "Masukkan kata kunci: ";
    cin >> kata_kunci;

    if (kata_kunci == "rahasia") {
        cout << "Kata kunci benar!\n";
        cout << "Pesannya adalah: blablabla\n";
    } else {
        cout << "Kata kunci salah. Pesan rahasia tidak bisa dilihat.\n";
    }

    return 0;
}
