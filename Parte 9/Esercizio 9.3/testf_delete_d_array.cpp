#include "d_array.h"
using namespace std;

void delete_d_array(dynamic_array&);

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

void delete_d_array(dynamic_array& d)
{
    string err = "Dimensione negativa";
    if(d.size < 0) throw err;

    delete [] d.store;
    d.size = 0;
}