#include <iostream>
#include <vector>
using namespace std;

vector<int> prime(int);

int main()
{
    int n;
    vector<int> v;
    cout << "Inserisci un numero positivo: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Inserisci un numero positivo: ";
        cin >> n;       
    }

    v = prime(n);
    for(int i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << endl;

    
    return 0;
}

vector<int> prime(int n)
{
    vector<int> v;
    for(int i = 0 ; i < n ; i++)
    {
        if(n%2 != 0 && n%3 != 0 && n%5 != 0 && n%7 != 0) v.push_back(i);
    }
    return v;
}