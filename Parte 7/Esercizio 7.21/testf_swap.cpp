#include <iostream>

using namespace std;

void swap(double,double);

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

void swap(double a , double b)
{
    double aux = a;
    a = b;
    b = aux;
    cout << "I valori scambiati sono: " << a << " " << b << endl;
}