#include "d_array.h"

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