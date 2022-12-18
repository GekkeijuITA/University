#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

struct Rect
{
    Point top_left;
    Point bottom_right;
};

float areaMin(Rect,Rect);

int main()
{
    return 0;
}

float areaMin(Rect r1 , Rect r2)
{
    float d1 = point_distance(r1.bottom_right,r1.top_left);
    float d2 = point_distance(r2.bottom_right,r2.top_left);
    if(d1 < d2)
    {
        //Area = base * altezza
        //Base = sqrt(pow(diagonale,2) - pow(altezza,2))
        //Altezza = sqrt(pow(diagonale,2) - pow(base,2))
        //Area = sqrt(pow(diagonale,2) - pow(altezza,2)) * sqrt(pow(diagonale,2) - pow(base,2))
        //calcolare l'area di r1
    }
    else
    {
        //calcolare l'area di r2
    }
}

float point_distance(Point p1 , Point p2)
{
    return sqrt((pow(p2.x,2) - pow(p1.x,2)) + (pow(p2.y,2) - pow(p1.y,2)));
}