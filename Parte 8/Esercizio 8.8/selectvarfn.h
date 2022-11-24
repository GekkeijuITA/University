#include <iostream>
using namespace std;

#define N 5

int count(char v[])
{
    char *p = v;
    int count = 0;
    for(int i = 0 ; i < N ; i++)
    {
        if('0' <= *p++ && *p <= '9')
        {
            count++;
        }
    }
    return count;
}