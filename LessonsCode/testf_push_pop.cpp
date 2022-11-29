#include <iostream>
#include <vector>
using namespace std;

struct my_vector
{
    int* store;
    unsigned int size;
    unsigned int capacity;
};

void push_back(my_vector&, int);
void pop_back(my_vector&);

int main()
{
    return 0;
}

void push_back(my_vector& v, int value)
{
    if (v.size == v.capacity)
    {
        string err = "Error: vector is full";
        throw err;
    }
    v.store[v.size] = value;
    v.size++;
}

void pop_back(my_vector& v)
{
    if (v.size == 0)
    {
        string err = "Error: vector is empty";
        throw err;
    }
    v.size--;
}