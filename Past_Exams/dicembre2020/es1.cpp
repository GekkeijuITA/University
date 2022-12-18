#include <vector>
#include <iostream>
using namespace std;

void readVector(vector<int>&);
void printVector(const vector<int>&);
bool isMult(vector<int>&);

int main()
{
    vector<int> v;
    readVector(v);
    cout << boolalpha << isMult(v) << endl;
    return 0;
}

bool isMult(vector<int>& v)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i++]%v[i] == 0)
            return false;
    }
    return true;
}

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
        while (val < 0)
        {
            cout << "Inserisci un numero positivo: ";
            cin >> val;
        }
        
        v.push_back(val);
    }    
}

void printVector(const vector<int>& v)
{
    for(unsigned int i = 0 ; i < v.size() ; i++)
        cout << v[i];
}