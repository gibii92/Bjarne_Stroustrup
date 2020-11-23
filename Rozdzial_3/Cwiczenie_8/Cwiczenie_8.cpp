#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout << "Sprawdzanie parzystosci liczby" << endl;
    cout << "Podaj liczbe do sprawdzenia: " << endl;
    int a;
    while (cin >> a)
    {
        if (a % 2 == 0)
            cout << "Liczba " << a << " jest parzysta. " << endl;
        else
            cout << "Liczba " << a << " jest nieparzysta. " << endl;
        cout << "Sprawdzanie parzystosci liczby" << endl;
        cout << "Podaj liczbe do sprawdzenia: " << endl;
    }
    cout << "Koniec";
    return 0;
}
