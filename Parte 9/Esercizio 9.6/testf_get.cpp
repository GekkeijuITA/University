#include "get_d_array.h"

int get(const dynamic_array&,int);

int main()
{
    dynamic_array a;
    create_d_array(a,5,0);
    print_d_array(a);
    try
    {
        set(a,3,5);
    }
    catch(string& err)
    {
        cout << err << endl;
        cerr << "Something went wrong - fix program" << endl;
    }
    print_d_array(a);

    try
    {
        cout << get(a,3) << endl;
    }
    catch(string& err)
    {
        cout << err << endl;
        cerr << "Something went wrong - fix program" << endl;
    }
    
    
    return 0;
}

int get(const dynamic_array& d , int index)
{
    string err = "Get - Bad index";
    if(index < 0 || index >= d.size) throw err;
    return d.store[index];
}