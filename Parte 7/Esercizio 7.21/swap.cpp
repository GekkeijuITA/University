#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
    double a,b;
    
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "I valori inseriti sono: " << a << " " << b << endl;
    swap(a,b);

    return 0;
}