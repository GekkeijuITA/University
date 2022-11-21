#include <iostream>
using namespace std;

#define N 10
int main()
{
    char v[N];
    char *p = v;
    for(int i = 0 ; i < N ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ numero: ";
        cin >> v[i];
        while(v[i] < '0' || v[i] > '9')
        {
            cout << "Errore! Inserire un carattere tra 0 e 9!" << endl;
            cin >> v[i];
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        cout << *p++ << endl;
    }

    return 0;
}