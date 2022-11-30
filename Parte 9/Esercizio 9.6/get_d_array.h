#include <iostream>
using namespace std;

struct dynamic_array
{
    int* store;
    unsigned int size;
};

void read_d_array(dynamic_array& d)
{
    int s = -1;
    while(s < 0)
    {
        cout << "Inserisci la dimensione del vettore" << endl;
        cin >> s; 
    }
    d.size = s;
    d.store = new int[s];
    for(int i = 0 ; i < s ; i++)
    {
        cout << "Inserisci un valore: ";
        cin >> d.store[i];
    }
}

void print_d_array(const dynamic_array& d)
{
    int *p = d.store;
    for(int i = 0 ; i < d.size ; i++)
    {
        cout << *p++ << "\t";
    }
    cout << endl;
}

void delete_d_array(dynamic_array& d)
{
    string err = "Negative value for dimension";
    if(d.size < 0) throw err;

    delete [] d.store;
    d.size = 0;
}

void create_d_array(dynamic_array& d, int s , int v)
{
    while(d.size == 0)
        delete_d_array(d);
    d.size = s;
    d.store = new int[s];
    for(int i = 0 ; i < s ; i++)
        d.store[i] = v;
}

void set(dynamic_array& d , int index , int value)
{
    string err = "Set - Bad index";
    if(index < 0 || index >= d.size) throw err;
    d.store[index] = value;
}