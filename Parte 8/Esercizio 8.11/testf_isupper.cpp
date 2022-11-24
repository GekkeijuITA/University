#include <iostream>
using namespace std;

#define R 2
#define C 5

bool isUpper(char[R][C]);


int main()
{
    char mat[R][C];
    char *p = mat[0];
    for(int i = 0 ; i < R*C ; i++)
    {
        cout << "Inserisci il " << i+1 << "^ carattere: ";
        cin >> *p++;
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
        {
            return false;
        }
    }
    return true;
}