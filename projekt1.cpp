#include <iostream>

using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "2. Sprawdz czy jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
        if(wyjscie == 2) {
           if(isPrime(a) && isPrime(b)) {
               cout << "Obie liczby sa pierwsze" << endl;
           } else if(isPrime(a)) {
               cout << "Liczba " << a << " jest pierwsza" << endl;
           } else if(isPrime(b)) {
               cout << "Liczba " << b << " jest pierwsza" << endl;
           } else {
               cout << "Zadna z liczb nie jest pierwsza" << endl;
           }
        }
        
    } while(wyjscie != 0);
    return 0;
}
