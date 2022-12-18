#include <iostream>
using namespace std;

int main()
{
    int const N = 5;
    int *v = new int[N];

    for(int i = 0 ; i < N ; i++)
    {
        if(i%2 != 0)
        {
            *v++ = i;
        }
    }

    cout << "Primo" << endl;
    for(int i = 0 ; i < N ; i++)
    {
        cout << i+1 << "^ Elemento: " << *v++ << endl;
    }
    cout << endl;

    delete [] v;
    v = nullptr;

    cout << "Secondo" << endl;
    v = new int[N*2];

    for(int i = 0 ; i < N*2 ; i++)
    {
        if(i%2 != 0)
        {
            *v++ = i;
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        cout << *v++ << " ";
    }
    cout << endl;

    delete [] v;
    v = nullptr;

    return 0;
}