#include <iostream>
#include "selectvarfn.h"
using namespace std;

int count(char[]);

int main()
{
    char v[N];
    char *p = v;
    for(int i = 0 ; i < N ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ carattere: ";
        cin >> *p++;
    }

    cout << "L'array ha " << count(v) << " caratteri compresi tra '0' e '9'" << endl;

    return 0;
}


