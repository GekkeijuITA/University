#include <iostream>
#include <vector>
using namespace std;

struct my_vector
{
    int* store;
    unsigned int size;
    unsigned int capacity;
};

void create(my_vector&, unsigned int);

int main()
{
    return 0;
}

void create(my_vector& v, unsigned int capacity)
{
    v.size = 0;
    v.capacity = capacity;
    v.store = new int[v.capacity];
}