#include <iostream>
using namespace std;

void replicate2_line(int,int,char,char);

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

void replicate2_line(int f, int s, char f_c, char s_c)
{
    for(int i = 0 ; i < f ; i++)
    {
        cout << f_c;
    }
    for(int i = 0 ; i < s ; i++)
    {
        cout << s_c;
    }
}