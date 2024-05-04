#include <iostream> //#Include <Stdio.H> --> #include <iostream>
#include "math.h" // #inlcude "math.h" --> #include "math.h"
using namespace std; //ditambahkan

int main(void) { //float main(void) --> int main(void)
    system("CLS"); //SYSTEM("CLS"): --> system("CLS");

    int n; //deklarasi n ditambahkan
    cout << "Insert a number: ";
    cin >> n; // cin << n; --> cin >> n;

    if (n <= 1) { // n > = 1 --> n <= 1
        cout << n << " bukanlah bilangan prima."; 
    } else {
        for (int i = 2; i <= sqrt(n); i++) { //int i = 1 --> int i = 2
            if (n % i == 0) { //n % 1 == 2 --> n % i == 0
                cout << n << " bukanlah bilangan prima."; 
                return 0; 
            }
        }

        cout << n << " merupakan bilangan prima."; // coute --> cout 
    }

    return 0; //return 1; --> return 0;
}
