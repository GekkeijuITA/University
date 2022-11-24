#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

bool sqroot(double,double);

int main()
{
    double x,sqrt_x;
    cout << "Inserisci il numero di cui si vuole sapere se la radice e' corretta:";
    cin >> x;
    while (x < 0)
    {
        cout << "Radice quadrata non possibile! Inserisci un valore positivo: ";
        cin >> x;
    }
    cout << "Inserisci la radice quadrata:";
    cin >> sqrt_x;
    while (sqrt_x < 0)
    {
        cout << "Radice quadrata non possibile! Inserisci un valore positivo: ";
        cin >> sqrt_x;
    }
    cout << boolalpha << sqroot(x,sqrt_x) << endl;
    return 0;
}

bool sqroot(double x, double sqrt_x)
{
    return fabs((sqrt_x*sqrt_x) - x) < 0.01f;
}