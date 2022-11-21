#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct Point
    {
        double x;
        double y;
    };
    Point p1,p2;
    double dist;

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

    dist = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));

    cout << "La distanza tra i due punti e': " << dist << endl;


    return 0;
}