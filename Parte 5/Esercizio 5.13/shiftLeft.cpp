#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int v[N];

    for(int i = 0 ; i < N ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ numero: ";
        cin >> v[i]; 
    }

    for(int i = 0 ; i < N-1 ; i++)
    {
        v[i] = v[i+1];
    }
    v[N-1] = 0;

    for(int i = 0 ; i < N ; i++)
        cout << v[i] << " ";

    return 0;
}