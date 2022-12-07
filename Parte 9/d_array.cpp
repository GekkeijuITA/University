#include "d_array.h"
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
    for(unsigned int i = 0 ; i < d.size ; i++)
    {
        cout << *p++ << "\t";
    }
    cout << endl;
}

void delete_d_array(dynamic_array& d)
{
    string err = "Dimensione negativa";
    if(d.size < 0) throw err;

    delete [] d.store;
    d.size = 0;
}

void create_d_array(dynamic_array& d, int s , int v)
{
    string err = "Invalid size";
    if(s <= 0) throw err;
    while(d.size == 0)
        delete_d_array(d);
    d.size = s;
    d.store = new int[s];
    for(int i = 0 ; i < s ; i++)
        d.store[i] = v;
}

void set(dynamic_array& d , int index , int value)
{
    string err = "Bad index";
    if(index < 0 || index >= d.size) throw err;
    d.store[index] = value;
}

int get(const dynamic_array& d , int index)
{
    string err = "Get - Bad index";
    if(index < 0 || index >= d.size) throw err;
    return d.store[index];
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

//comando: g++ testf_d_array.cpp d_array.cpp -c d_array
//comando ./a.out