#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout << "Podaj dwie liczby calkowite: " << endl;
    int val1, val2;
    while (cin >> val1 >> val2)
    {
        int wieksza = 1, mniejsza = 1, suma, roznica, iloczyn, proporcja;
        if (val1 > val2)
        {
            wieksza = val1;
            mniejsza = val2;
        }
        else if (val2 > val1)
        {
            wieksza = val1;
            mniejsza = val2;
        }
        if (wieksza == mniejsza)
            cout << "Podane wartosci sa rowne." << endl;
        else
            cout << "Wieksza: " << wieksza << ", Mniejsza: " << mniejsza << endl;
        suma = val1 + val2;
        cout << "Suma: " << suma << endl;
        roznica = wieksza - mniejsza;
        cout << "Roznica: " << roznica << endl;
        iloczyn = val1 * val2;
        cout << "Iloczyn: " << iloczyn << endl;
        if (val1 == 0 || val2 == 0)
            cout << "Jedna lub obie z podanych wartosci jest rowna 0, nie mozna wyznaczyc proporcji." << endl;
        else
        {
            proporcja = wieksza / mniejsza;
            cout << "Proporcja: " << proporcja << endl;
        }
        cout << "Podaj dwie liczby calkowite: " << endl;
    }
    cout << "Koniec";
    return 0;
}
