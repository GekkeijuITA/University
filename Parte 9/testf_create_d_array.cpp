#include "d_array.h"

int main()
{
    dynamic_array a;
    int s = 5;
    int v = 0;
    create_d_array(a,s,v);
    print_d_array(a);
    return 0;
}