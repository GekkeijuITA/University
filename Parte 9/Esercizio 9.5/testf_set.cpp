#include "set_d_array.h"

void set(dynamic_array&,int,int);

int main()
{
    dynamic_array a;
    create_d_array(a,5,0);
    print_d_array(a);
    try
    {
        set(a,4,1);
    }
    catch(string& err)
    {
        cout << err << endl;
        cerr << "Something went wrong - fix program\n";
    }
    print_d_array(a);
    return 0;
}

void set(dynamic_array& d , int index , int value)
{
    string err = "Bad index";
    if(index < 0 || index >= d.size) throw err;
    d.store[index] = value;
}