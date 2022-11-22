#include <iostream>
using namespace std;

bool isUpper(char);

#define R 2
#define C 5
int main()
{
    char mat[R][C];
    char *p = mat[0];
    for(int i = 0 ; i < R*C ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ carattere: ";
        cin >> *p++;
        while(*p++ >= '0' && *p++ <='9')
        {
            cout << "Errore! Inserisci un carattere!" << endl;
            cin >> *p++;
        }
    }
    cout << boolalpha << isUpper(mat) << endl;
    return 0;
}

bool isUpper(char mat[][C])
{
    char *p = mat[0];
    for(int i = 0 ; i < R*C ; i++)
    {
        if(*p++ < 'A' || *p++ > 'Z')
            return false;
    }
    return true;
}