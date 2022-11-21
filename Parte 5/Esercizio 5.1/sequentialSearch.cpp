#include <iostream>
using namespace std;

int main()
{
    const int N = 15;
    int item,v[N],loc = -1;
    bool found = false;

    cout << "Inserisci l'item da cercare: ";
    cin >> item;

    for(int i = 0 ; i < N ; i++)
    {
        int val;
        cout << "Valore n. " << i << ": ";
        cin >> val;
        v[i] = val;
    }

    for(int i = 0 ; i < N , !found ; i++)
    {
        if(v[i] == item)
        {
            found = true;
            loc = i;
        }
    }

    if(found)
    {
        cout << "Trovato in posizione " << loc << endl;
    }
    else
    {
        cout << "Non trovato" << endl;
    }

    return 0;
}