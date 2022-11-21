#include <iostream>
using namespace std;

int main()
{
    int avg = 0,i = 0;
    char answ;
    do
    {
        int num;
        i++;
        cout << "Inserisci un numero: ";
        cin >> num;
        avg += num;
        cout << "Per continuare inserire 'S' o 's' altrimenti inserisci qualsiasi altro carattere: ";
        cin >> answ;
    } while (answ == 'S' || answ == 's');
    cout << "La media dei numeri inseriti e': " << avg/(float)i << endl;
    return 0;
}