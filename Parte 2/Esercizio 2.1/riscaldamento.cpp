#include <iostream>
using namespace std;

int main()
{
    char a,b;
    cout << "Inserire il primo carattere: ";
    cin >> a;
    cout << "Inserire il secondo carattere: ";
    cin >> b;
    if(a == b)
    {
        cout << "Sono uguali" << endl;
    }
    else
    {
        cout << "Non sono uguali" << endl;
    }
}