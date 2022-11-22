#include <iostream>
using namespace std;

int count(char[]);

#define N 5
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

int count(char v[])
{
    char *p = v;
    int count = 0;
    for(int i = 0 ; i < N ; i++)
    {
        if(*p++ >= '0' && *p++ <= '9')
            count++;
    }
    return count;
}


