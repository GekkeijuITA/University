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
//void cancel_occur(list&,int);
void insert_in_order(list&,int);


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
    cell* curr = l; //current cell
    cell* past = nullptr; //previous cell
    while (curr -> info != x && curr != nullptr)
    {
        past = curr;
        curr = curr -> next;
    }
    if(curr != nullptr) //
    {
        if(past != nullptr) //Middle
        {
            past -> next = curr -> next;
            delete curr;
        }
        else //Head cell
        {
            l = curr -> next;
            delete curr;
        }
    }
}

/*void cancel_occur(list& l,int x)
{
    cell* aux = l;
    while(aux != nullptr)
    {
        if(aux -> info == x)
        {
            cancel_elem(aux,x);
        }
    }
}*/

void insert_in_order(list& l,int x)
{
    cell* aux;
    cell* curr = l;
    cell* past = nullptr;
    aux -> info = x;

    while(curr != nullptr && curr -> info < x) //Find info bigger than x
    {
        past = curr;
    }
    past -> next = aux;
    aux -> next = curr;
}

