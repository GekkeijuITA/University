#include "d_array.h"

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