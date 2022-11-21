#include <iostream>
using namespace std;

int main()
{
    const int K = 4;
    int v[K],N;

    for(int i = 0 ; i < K ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ numero: ";
        cin >> v[i]; 
    }

    cout << "Inserisci N per traslare: ";
    cin >> N;

    if((N * -1) >= K || N >= K)
    {
        for(int i = 0 ; i < K ; i++)
            v[i] = 0;
        for(int i = 0 ; i < K ; i++)
            cout << v[i] << " ";
        return 0;
    }

    if(N < 0)
    {
        N *= -1;
        //left
        for(int i = 0 ; i < K-1 ; i++)
            v[i] = v[i+N];

        for(int i = 1 ; i <= N ; i++)
            v[K-i] = 0;     
    }
    else
    {
        //right
        for(int i = K-1 ; i > 0 ; i--)
            v[i] = v[i-N];

        for(int i = 0 ; i < N ; i++)
            v[i] = 0;
    }

    for(int i = 0 ; i < K ; i++)
        cout << v[i] << " ";

    return 0;
}