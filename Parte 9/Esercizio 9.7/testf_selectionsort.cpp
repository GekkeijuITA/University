#include "selectionsort_d_array.h"

void SelectionSort(dynamic_array&);

int main()
{
    dynamic_array d;
    read_d_array(d);
    print_d_array(d);
    SelectionSort(d);
    print_d_array(d);
    return 0;
}

void SelectionSort(dynamic_array& d)
{
    for(int i = 0 ; i < d.size ; i++)
    {
        for(int j = i ; j < d.size ; j++)
        {
            if(d.store[j] < d.store[i])
            {
                int aux = d.store[i];
                d.store[i] = d.store[j];
                d.store[j] = aux;
            }
        }
    }
}