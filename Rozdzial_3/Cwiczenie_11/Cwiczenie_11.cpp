#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{

    int g_1, g_2, g_5, g_10, g_20, g_50, z_1, z_2, z_5;
    while (1)
    {
        int grosze = 0;
        double zlotowki = 0;
        cout << "Ile masz jednogroszowek? " << endl;
        cin >> g_1;
        grosze += g_1;
        cout << "Ile masz dwugroszowek? " << endl;
        cin >> g_2;
        grosze += g_2;
        cout << "Ile masz pieciogroszowek? " << endl;
        cin >> g_5;
        grosze += g_5;
        cout << "Ile masz dziesieciogroszowek? " << endl;
        cin >> g_10;
        grosze += g_10;
        cout << "Ile masz dwudziestogroszowek? " << endl;
        cin >> g_20;
        grosze += g_20;
        cout << "Ile masz piecdziesieciogroszowek? " << endl;
        cin >> g_50;
        grosze += g_50;
        cout << "Ile masz zlotowek? " << endl;
        cin >> z_1;
        grosze += z_1 * 100;
        cout << "Ile masz dwuzlotowek? " << endl;
        cin >> z_2;
        grosze += z_2 * 100;
        cout << "Ile masz pieciozlotowek? " << endl;
        cin >> z_5;
        grosze += z_5 * 100;
        cout<<"Posiadasz "<<grosze<<" groszy"<<endl;
        zlotowki=1.0*grosze/100;
        cout<<"Posiadasz "<<zlotowki<<" zlotego"<<endl;       
        cout << "Aby ponownie wpisac dane wcisnij dowolny przycisk." << endl;
        cin.get();
        cin.get();
    }
    cout << "Koniec";
    return 0;
}
