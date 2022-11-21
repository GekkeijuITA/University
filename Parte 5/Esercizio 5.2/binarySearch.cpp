#include <iostream>
using namespace std;

int main()
{
    const int N = 15;
    int v[N],item,loc = -1;
    bool found = false;

    for(int i = 0 ; i < N ; i++)
    {
        int val;
        cout << "Valore n. " << i << ": ";
        cin >> val;
        v[i] = val;
    }

    //sort
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(v[j] > v[i])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    cout << "Inserisci l'item da cercare: ";
    cin >> item;
    
    //binary search
    if(item == v[N/2])
    {
        found = true;
        loc = N/2;
    }
    else if(item < v[N/2])
    {
        for(int i = 0 ; i < N/2 , !found ; i++)
        {
            if(v[i] == item)
            {
                found = true;
                loc = i;
            }
        }
    }
    else
    {
        for(int i = N ; i > N/2 , !found ; i--)
        {
            if(v[i] == item)
            {
                found = true;
                loc = i;
            }
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