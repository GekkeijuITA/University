#include <iostream>
#include "ndigits.h"
using namespace std;


int main()
{
    int n;
    cout << "Inserisci un numero intero: " << endl;
    cin >> n;
    cout << "Il numero " << n << " ha " << ndigits(n) << " cifre." << endl;
    return 0;
}

