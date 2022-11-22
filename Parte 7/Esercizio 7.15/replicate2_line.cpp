#include <iostream>
#include "replicate2_line.h"

using namespace std;

int main()
{
    int f,s;
    char f_c,s_c;
    cout << "Inserisci il primo carattere: ";
    cin >> f_c;
    cout << "Inserisci il secondo carattere: ";
    cin >> s_c;
    do{
        cout << "Inserisci quante volte vuoi stampare il carattere '" << f_c << "': ";
        cin >> f;
    }while(f < 0);
    do{
        cout << "Inserisci quante volte vuoi stampare il carattere '" << s_c << "': ";
        cin >> s;
    }while(s < 0);

    replicate2_line(f,s,f_c,s_c);

    return 0;
}