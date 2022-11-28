#include <iostream>
#include <vector>
using namespace std;

void readVector(vector<int>& v)
{
    int N;
    cout << "Inserisci la dimensione della sequenza: ";
    cin >> N;
    while(N <= 0)
    {
        cout << "Errore! Inserisci un valore maggiore di 0(zero)";
        cin >> N;
    }
    for(int i = 0 ; i < N ; i++)
    {
        int val;
        cout << "Inserisci un numero: ";
        cin >> val;
        while(val < 0)
        {
            cout << "Inserisci un numero positivo: ";
            cin >> val;
        }
        v.push_back(val);
    }    
}

void printVector(const vector<int>& v)
{
    for(int i = 0 ; i < v.size() ; i++)
        cout << v[i];
    cout << endl;
}