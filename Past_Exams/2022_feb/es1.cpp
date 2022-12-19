#include <iostream>
using namespace std;

int count(int);

int main()
{
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;
    cout << count(n) << endl;
    return 0;
}

int count(int n)
{
    int i = 0;
    while(n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}