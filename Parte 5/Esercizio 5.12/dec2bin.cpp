#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int n,v[N],max = 1,j = 0;

    //pow
    for(int i = 0 ; i < N ; i++)
    {
        max *= 2;
    }

    do
    {
        cout << "Inserisci un numero strettamente minore di " << max << ": ";
        cin >> n;
    } while (n >= max);

    for(int i = N-1; i >= 0; i-- , j++)
    {
        int aux = n;
        v[i] = aux%2;
        n = n/2;
    }

    for(int i = 0 ; i < N-j-1 ; i++)
        v[i] = 0;

    for(int i = 0 ; i < N ; i++)
        cout << v[i];

    return 0;
}