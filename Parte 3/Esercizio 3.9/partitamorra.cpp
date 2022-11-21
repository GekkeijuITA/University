#include <iostream>
using namespace std;

int main()
{
    int p1,p2;
    char risp;
    do
    {
        cout << "**** 0 = pietra, 1 = forbice, 2 = carta ****" << endl;
        do{
            cout << "GIOCATORE 1" << endl << "Scegli la tua mossa: ";
            cin >> p1;
        }
        while (p1 < 0 || p1 > 2);

        do{
            cout << "GIOCATORE 2" << endl << "Scegli la tua mossa: ";
            cin >> p2;
        }
        while (p2 < 0 || p2 > 2);

        if (p1 == p2)
            cout << "Pareggio" << endl;
        else if (p1 == 0 && p2 == 1)
            cout << "Vince il giocatore 1" << endl;
        else if (p1 == 1 && p2 == 2)
            cout << "Vince il giocatore 1" << endl;
        else if (p1 == 2 && p2 == 0)
            cout << "Vince il giocatore 1" << endl;
        else
            cout << "Vince il giocatore 2" << endl;

        cout << "Per continuare inserire 'S' o 's' altrimenti inserisci qualsiasi altro carattere: ";
        cin >> risp;    
        if(risp == 'S' || risp == 's')
            cout << endl << "----------------------------------------" << endl << endl;
    } while (risp == 'S' || risp == 's');

    return 0;
}