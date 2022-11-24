#include <cmath>

bool sqroot(double x, double sqrt_x)
{
    return fabs((sqrt_x*sqrt_x) - x) < 0.01f;
}