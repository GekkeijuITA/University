#include <iostream>
using namespace std;

int main()
{
    int yearUser, yearNow = 2022;
    cout << "Inserisci il tuo anno di nascita (maggiore di 0): ";
    cin >> yearUser;
    while(yearUser <= 0 && yearUser > yearNow)
    {
        cout << "Inserisci un anno valido: ";
        cin >> yearUser;
    }
    cout << "Hai " << yearNow - yearUser << " anni" << endl;
    return 0;
}