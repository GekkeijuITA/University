#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14 , r;
    cout << "Inserisci il raggio del cerchio (maggiore di 0): ";
    cin >> r;
    while(r < 0)
    {
        cout << "Errore! Inserire un valore valido: ";
        cin >> r;
    }
    cout << "L'area del cerchio e': " << (r*r) * pi << endl;
    cout << "Il perimetro del cerchio e': " << (r * 2) * pi << endl;
    return 0;
}