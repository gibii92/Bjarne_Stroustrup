#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout << "Podaj liczbe do konwersji na slowo lub slowo do konwersji na liczbe(Program obsluguje liczby od 0 do 4): " << endl;
    string liczba;
    while (cin >> liczba)
    {
        if (liczba == "0")
            cout << "Zero" << endl;
        else if (liczba == "1")
            cout << "Jeden" << endl;
        else if (liczba == "2")
            cout << "Dwa" << endl;
        else if (liczba == "3")
            cout << "Trzy" << endl;
        else if (liczba == "4")
            cout << "Cztery" << endl;
        else if (liczba == "zero" || liczba == "Zero")
            cout << "0" << endl;
        else if (liczba == "jeden" || liczba == "Jeden")
            cout << "1" << endl;
        else if (liczba == "dwa" || liczba == "Dwa")
            cout << "2" << endl;
        else if (liczba == "trzy" || liczba == "Trzy")
            cout << "3" << endl;
        else if (liczba == "cztery" || liczba == "Cztery")
            cout << "4" << endl;
        else
            cout << "Glupi komputer" << endl;
    }
    cout << "Koniec";
    return 0;
}
