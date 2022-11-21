#include <iostream>
using namespace std;

int main()
{
    char a,b,c;
    cout << "Inserisci un carattere: ";
    cin >> a;
    cout << "Inserisci un'altro carattere: ";
    cin >> b;

    cout << "a vale: " << a << endl;
    cout << "b vale: " << b << endl;
    cout << "\n";
    
    c = a;
    a = b;
    b = c;

    cout << "a vale: " << a << endl;
    cout << "b vale: " << b << endl;
}