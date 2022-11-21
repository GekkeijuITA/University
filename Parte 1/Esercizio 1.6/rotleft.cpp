#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;
    cout << "Hai inserito: " << a << " - " << b << " - " << c << endl;
    d = a;
    a = b;
    b = c;
    c = d;
    cout << "Scambio effettuato: " << a << " - " << b << " - " << c << endl;
    return 0;
}