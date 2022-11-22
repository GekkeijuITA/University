#include <iostream>
#include "rhombus.h"

using namespace std;


int main()
{
    int n;
    cout << "Inserisci un numero maggiore di 0: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Errore! Inserire un numero maggiore di 0: ";
        cin >> n;
    }
    rhombus(n);
    return 0;
}