#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout << "Podaj 3 liczby calkowite: " << endl;
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a <= b && a <= c)
        {
            if (b <= c)
                cout << a << ", " << b << ", " << c << endl;
            else
                cout << a << ", " << c << ", " << b << endl;
        }
        else if (b <= a && b <= c)
        {
            if (a <= c)
                cout << b << ", " << a << ", " << c << endl;
            else
                cout << b << ", " << c << ", " << a << endl;
        }
        else if (c <= a && c <= b)
        {
            if (a <= b)
                cout << c << ", " << a << ", " << b << endl;
            else
                cout << c << ", " << b << ", " << a << endl;
        }
        cout << "Podaj 3 liczby calkowite: " << endl;
    }
    cout << "Koniec";
    return 0;
}
