#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    cout << "Inserisci l'ora (tra 0 e 23): ";
    cin >> hours;
    while(hours < 0 || hours > 23)
    {
        cout << "Inserisci un'ora valida: ";
        cin >> hours;
    }
    cout << "Inserisci i minuti (tra 0 e 59): ";
    while(minutes < 0 || minutes > 59)
    {
        cout << "Inserisci i minuti validi: ";
        cin >> minutes;
    }
    cin >> minutes;
    cout << "Sono " << hours * 60 + minutes << " minuti" << endl;
    return 0;
}