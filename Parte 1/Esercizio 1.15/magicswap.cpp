#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;

    //swap the numbers with ^ operator
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    cout << n1 << " " << n2 << endl;
    return 0;
}