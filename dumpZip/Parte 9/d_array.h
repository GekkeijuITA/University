#include <iostream>
using namespace std;

struct dynamic_array
{
    int* store;
    unsigned int size;
};

void read_d_array(dynamic_array&);
void print_d_array(const dynamic_array&);
void delete_d_array(dynamic_array&);
void create_d_array(dynamic_array&, int, int);
void set(dynamic_array&,unsigned int, int);
int get(const dynamic_array&,unsigned int);
void SelectionSort(dynamic_array&);