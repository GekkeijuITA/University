#include "d_array.h"

int main()
{
    dynamic_array d;
    read_d_array(d);
    print_d_array(d);
    SelectionSort(d);
    print_d_array(d);
    return 0;
}