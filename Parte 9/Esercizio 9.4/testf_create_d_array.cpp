#include "create_d_array.h"

void create_d_array(dynamic_array&,int,int);

int main()
{
    dynamic_array a;
    int s = 5;
    int v = 0;
    create_d_array(a,s,v);
    print_d_array(a);
    return 0;
}

void create_d_array(dynamic_array& d, int s , int v)
{
    while(d.size == 0)
        delete_d_array(d);
    d.size = s;
    d.store = new int[s];
    for(int i = 0 ; i < s ; i++)
        d.store[i] = v;
}