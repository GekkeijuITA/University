#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "a vale: " << a << endl;
    cout << "b vale: " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "a vale: " << a << endl;
    cout << "b vale: " << b << endl;    
    return 0;
}