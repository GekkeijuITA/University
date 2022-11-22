#include <iostream>
#include "divide.h"
using namespace std;

int main()
{
    int a,b,q,r;
    cout << "Inserisci il dividendo: ";
    cin >> a;
    cout << "Inserisci il divisore: ";
    cin >> b;
    divide(a,b,q,r);
    cout << "Quoziente: " << q << endl;
    cout << "Resto: " << r << endl;

    return 0;
}