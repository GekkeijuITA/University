#include <iostream>
using namespace std;

int main()
{
    int a,b;
    float mean;
    cout << "Inserire il primo numero: ";
    cin >> a;
    cout << "Inserire il secondo numero: ";
    cin >> b;
    mean = (a + b) / 2;
    cout << "La media e': " << mean << endl;
    return 0;
}