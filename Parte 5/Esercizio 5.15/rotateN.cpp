#include <iostream>
using namespace std;

int main()
{
    const int K = 4;
    int v[K],aux,N;

    for(int i = 0 ; i < K ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ numero: ";
        cin >> v[i]; 
    }

    cout << "Inserisci N per traslare: ";
    cin >> N;

    if(N > K || (N * -1) > K)
    {
        N = N%K;
        if(N < 0)
            N *= -1;
    }
    else if(N == K)
    {
        for(int i = 0 ; i < K ; i++)
            cout << v[i] << " ";
        return 0;
    }

    if(N < 0)
    {
        N *= -1;
        //left
        for(int j = 0 ; j < N ; j++)
        {
            aux = v[0];
            for(int i = 0 ; i < K ; i++)
            {
                v[i] = v[i+1];
            }
            v[K-1] = aux;
        }
    }
    else
    {
        //right
        for(int j = 0 ; j < N ; j++)
        {
            aux = v[K-1];
            for(int i = K-1 ; i > 0 ; i--)
            {
                v[i] = v[i-1];
            }
            v[0] = aux;
        }
    }

    for(int i = 0 ; i < K ; i++)
        cout << v[i] << " ";

    return 0;
}