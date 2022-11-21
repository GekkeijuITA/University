#include <iostream>
using namespace std;

int main()
{
    bool result;
    result = (3 > 1);
    cout << boolalpha << "tre e' maggiore di uno = " << result << endl;
    result = (4/2 < 0);
    cout << boolalpha << "quattro diviso due e' minore di zero = " << result << endl;
    result = ("zero" == 0);
    cout << boolalpha << "il carattere 'zero' e' uguale al valore zero = " << result << endl;
    result = (0 < (10/2) <= 10);
    cout << boolalpha << "dieci mezzi e' compreso fra zero escluso e dieci incluso (ossia: dieci mezzi e' maggiore di zero E dieci mezzi e' minore o uguale a dieci = " << result << endl;
    result = !(3 > 2 && 3 < 1);
    cout << boolalpha << "non e' vero che tre e' maggiore di due e minore di uno = " << result << endl;
    if(7 > 0)
    {
        result = true;
    }
    else if(!(3 < 5))
    {
        result = true;
    }
    else
    {
        result = false;
    }
    cout << boolalpha << "tre minore di meno cinque implica sette maggiore di zero = " << result << endl; 
}