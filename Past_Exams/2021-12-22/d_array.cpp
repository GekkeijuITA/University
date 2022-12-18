#include <iostream>
using namespace std;

struct array_dinamico
{
    int* d;
    int size;
    int capacity;
};

void init_ad(array_dinamico&);

int main()
{
    return 0;
}

void init_ad(array_dinamico& arr)
{
    arr.d = new int[arr.size];
}

//