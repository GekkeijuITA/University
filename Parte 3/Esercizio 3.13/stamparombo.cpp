#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Inserisci un numero intero positivo: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Errore! Inserisci un numero intero positivo maggiore di 0: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}