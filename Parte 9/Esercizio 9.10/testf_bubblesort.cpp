#include "bubblesort_d_array.h"

void BubbleSort(dynamic_array&);

int main()
{
    dynamic_array a;
    create_d_array(a,10,10);
    try
    {
        set(a,1,9);
        set(a,2,8);
        set(a,3,7);
        set(a,4,6);
        set(a,5,3);
        set(a,6,2);
        set(a,7,1);
        set(a,8,4);
        set(a,9,5);
    }
    catch(string& err)
    {
        cout << err << endl;
        cerr << "Something went wrong - fix program" << endl;
    }
    print_d_array(a);
    BubbleSort(a);
    print_d_array(a);
    
    return 0;
}

void BubbleSort(dynamic_array& d)
{
    for(int i = 0 ; i < d.size ; i++)
    {
        for(int j = 0 ; j < d.size - 1 ; j++)
        {
            if(d.store[j] > d.store[j+1])
            {
                int temp = d.store[j];
                d.store[j] = d.store[j+1];
                d.store[j+1] = temp;
            }
        }
    }
}