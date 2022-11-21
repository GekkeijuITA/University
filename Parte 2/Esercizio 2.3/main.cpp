#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;
    if(n < 0)
    {
        n *= -1;
    }
    cout << "Valore assoluto: " << n << endl;
    return 0;
}