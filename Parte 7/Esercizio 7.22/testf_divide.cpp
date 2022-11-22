#include <iostream>
using namespace std;

void divide(int,int,int&,int&);

int main()
{
    int a,b,q,r;
    cout << "Inserisci il dividendo: ";
    cin >> a;
    cout << "Inserisci il divisore: ";
    cin >> b;
    divide(a,b,q,r);
    cout << "Quoziente: " << q << endl;
    cout << "Resto: " << r << endl;

    return 0;
}

void divide(int a , int b , int& q , int& r)
{
    q = a/b;
    r = a%b;
}