#include <iostream>
using namespace std;

int main()
{
    int const N = 5;
    int *v = new int[N]; // guardare qui che non è convincente la dichiarazione

    for(int i = 0 ; i < N ; i++)
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

    int *v = new int[N*2];

        for(int i = 0 ; i < N ; i++)
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

