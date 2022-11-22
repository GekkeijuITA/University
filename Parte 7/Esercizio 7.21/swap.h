#include <iostream>
using namespace std;

void swap(double a , double b)
{
    double aux = a;
    a = b;
    b = aux;
    cout << "I valori scambiati sono: " << a << " " << b << endl;
}