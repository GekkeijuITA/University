#include <iostream>
#include <vector>
using namespace std;

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

void create(my_vector& v, unsigned int capacity)
{
    v.size = 0;
    v.capacity = capacity;
    v.store = new int[v.capacity];
}