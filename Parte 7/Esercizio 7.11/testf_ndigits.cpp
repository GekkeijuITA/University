#include <iostream>

using namespace std;

int ndigits(int);

int main()
{
    int n;
    cout << "Inserisci un numero intero: " << endl;
    cin >> n;
    cout << "Il numero " << n << " ha " << ndigits(n) << " cifre." << endl;
    return 0;
}

int ndigits(int n)
{
    int digits = 0;
    while (n > 0)
    {
        n /= 10;
        digits++;
    }
    return digits;
}