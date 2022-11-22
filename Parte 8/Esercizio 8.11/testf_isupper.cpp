#include <iostream>
#include <typeinfo>
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
    }
    
    cout << boolalpha << isUpper(mat[R][C]) << endl;
    return 0;
}

bool isUpper(char mat[][C])
{
    char *p = mat[0];
    for(int i = 0 ; i < R*C ; i++ , *p++)
    {
        if(*p < 'A' || *p > 'Z')
            return false;
    }
    return true;
}