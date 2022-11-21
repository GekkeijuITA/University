#include <iostream>
using namespace std;

int main()
{
    const int N = 4;
    int v[N],aux;

    for(int i = 0 ; i < N ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ numero: ";
        cin >> v[i]; 
    }

    aux = v[N-1];
    for(int i = N-1 ; i > 0 ; i--)
    {
        v[i] = v[i-1];
    }
    v[0] = aux;

    for(int i = 0 ; i < N ; i++)
        cout << v[i] << " ";

    return 0;
}