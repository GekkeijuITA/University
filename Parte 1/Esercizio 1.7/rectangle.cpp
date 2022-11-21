#include <iostream>
using namespace std;

int main()
{
    float b,h;
    cout << "Inserisci la base del rettangolo maggiore di 0: ";
    cin >> b;
    while(b <= 0)
    {
        cout << "Errore! Inserire un valore valido per la base! ";
        cin >> b;
    }
    cout << "Inserisci il lato del rettangolo maggiore di 0: ";
    cin >> h;
    while(h <= 0)
    {
        cout << "Errore! Inserire un valore valido per il lato! ";
        cin >> h;
    }

    cout << "Il perimetro e': " << (b + h) * 2 << endl;
    cout << "L'area e': " << b * h << endl;
}