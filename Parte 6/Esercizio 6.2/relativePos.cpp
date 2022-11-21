#include <iostream>
using namespace std;

int main()
{
    struct Point
    {
        double x;
        double y;
    };

    Point p1,p2;

    cout << "Inserire le coordinate del punto P1:" << endl;
    cout << "Inserisci la x: ";
    cin >> p1.x;
    cout << "Inserisci la y: ";
    cin >> p1.y;

    cout << "Inserire le coordinate del punto P2:" << endl;
    cout << "Inserisci la x: ";
    cin >> p2.x;
    cout << "Inserisci la y: ";
    cin >> p2.y;  

    if(p1.x == p2.x && p1.y == p2.y)
    {
        cout << "I punti sono uguali" << endl;
        return 0;
    }  

    cout << "Il secondo punto e' ";
    if(p2.y > p1.y)
    {
        cout << "in alto ";
    }
    else
    {
        cout << "in basso ";
    }
    if(p2.x > p1.x)
    {
        cout << "a destra ";
    }
    else
    {
        cout << "a sinistra ";
    }
    cout << "rispetto al primo" << endl;
    
    return 0;
}