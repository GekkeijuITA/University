#include <iostream>
using namespace std;

struct cell
{
    int info;
    cell* next;
};

typedef cell* list;

void cancel_elem(list&,int);
void create(list&);

int main()
{
    list l1;
    create(l1);
    return 0;
}

void create(list& l)
{

}

void cancel_elem(list& l,int x)
{
    cell* curr = l; //current cell variable
    while (curr != nullptr && curr -> info == x)
    {
        
    }
    
}