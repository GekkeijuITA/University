#include <iostream>
#include <vector>
using namespace std;

struct my_vector
{
    int* store;
    unsigned int size;
    unsigned int capacity;
};

void resize(my_vector&, unsigned int);

int main()
{
    return 0;
}

void resize(my_vector& v , unsigned int new_capacity)
{
    int *temp = new int[new_capacity];
    if(v.capacity < new_capacity) 
    {
        for(unsigned int i = 0 ; i < v.capacity ; ++i)
        {
            temp[i] = v.store[i];
        }
    }
    else
    {
        for(unsigned int i = 0 ; i < new_capacity ; ++i)
        {
            temp[i] = v.store[i];
        }
    }
    delete [] v.store;
    v.store = temp;
    v.capacity = new_capacity;
    if(v.size > v.capacity)
    {
        v.size = v.capacity;
    }
}