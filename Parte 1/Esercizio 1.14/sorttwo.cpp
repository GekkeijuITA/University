#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    if((n1-n2) > 0)
    {
        cout << "Il numero maggiore e': " << n1 << endl;
        cout << "Il numero minore e': " << n2 << endl;
    }
    else
    {
        cout << "Il numero maggiore e': " << n2 << endl;
        cout << "Il numero minore e': " << n1 << endl;
    }
    return 0;
}