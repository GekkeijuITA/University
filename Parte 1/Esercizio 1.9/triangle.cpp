#include <iostream>
using namespace std;

#define N 3
int main()
{
    float h;
    float sides[N];

    cout << "Inserisci il 1^ lato: ";
    cin >> sides[0];
    while(sides[0] < 0)
    {
        cout << "Errore! Inserisci un valore valido!" << endl;
        cin >> sides[0];
    }    
    for(int i = 1 ; i < N ; i++)
    {
        cout << "Inserisci il " << i + 1 << "^ lato: ";
        cin >> sides[i];
        while(sides[i] <= 0)
        {
            cout << "Errore! Inserisci un valore valido!" << endl;
            cin >> sides[i];
        }
    }
    cout << "Inserisci l'altezza del triangolo maggiore di 0: ";
    cin >> h;
    while(h <= 0)
    {
        cout << "Inserisci un altezza valida: ";
        cin >> h;
    }
    cout << "L'area del triangolo vale: " << (sides[0] * h) / 2 << endl;
    cout << "Il perimetro del triangolo vale: " << sides[0] + sides[1] + sides[2] << endl;
    return 0;
}