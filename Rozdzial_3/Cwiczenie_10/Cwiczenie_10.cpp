#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout << "Podaj operator oraz dwie liczby " << endl;
    string znak;
    double a, b;
    while (cin >> znak >> a >> b)
    {
        if (znak == "+" || znak == "plus")
            cout << "Suma liczb " << a << " oraz " << b << " wynosi: " << a + b << endl;
        else if (znak == "-" || znak == "minus")
            cout << "Roznica liczb " << a << " oraz " << b << " wynosi: " << a - b << endl;
        else if (znak == "*" || znak == "mnoz")
            cout << "Iloczyn liczb " << a << " oraz " << b << " wynosi: " << a * b << endl;
        else if (znak == "/" || znak == "dziel")
        {
            if (a != 0 && b != 0)
                cout << "Iloraz liczb " << a << " oraz " << b << " wynosi: " << a / b << endl;
            else
                cout << "Z podanych liczb nie mozna wyliczyc ilorazu" << endl;
        }

        cout << "Podaj operator oraz dwie liczby " << endl;
    }
    cout << "Koniec";
    return 0;
}
