#include <iostream>
#include "isupper.h"

using namespace std;

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