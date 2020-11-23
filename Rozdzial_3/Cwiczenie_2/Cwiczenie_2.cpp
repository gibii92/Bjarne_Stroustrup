#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    cout<<"Podaj liczbe mil do przekonwertowania na kilometry: "<<endl;
    double mila;
    while(cin>>mila) {
        double kilometr = mila* 1.609;
        cout<<mila<<" w milach to "<<kilometr<<" w kilometrach"<<endl;
        cout<<"Podaj liczbe mil do przekonwertowania na kilometry: "<<endl;
    }
    cout<<"Koniec";
    return 0;
}
