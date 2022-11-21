#include <iostream>
using namespace std;

int main()
{
    const int N = 15;
    int item,v[N],count = 0;

    cout << "Inserisci l'item da cercare: ";
    cin >> item;

    for(int i = 0 ; i < N ; i++)
    {
        int val;
        cout << "Valore n. " << i << ": ";
        cin >> val;
        v[i] = val;
    }

    for(int i = 0 ; i < N ; i++)
    {
        if(v[i] == item)
        {
            count++;
        }
    }

    cout << "L'item compare " << count << " volte nell'array" << endl;

    return 0;
}