#include "d_array.h"

int main()
{
    dynamic_array a;
    read_d_array(a);
    print_d_array(a);
    try
    {
        delete_d_array(a);
    }
    catch(string& err)
    {
        cout << err;
        cerr << "oops! bad dynamic array dimension - fix program\n";
    }
    return 0;
}