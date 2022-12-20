#include <iostream>
using namespace std;

struct cell
{
    int head;
    cell* next;
};

typedef cell* list;

int main()
{
    return 0;
}

bool isEmpty(list& l)
{
    return (l -> next == nullptr);
}

void createEmpty(list& l)
{
    l -> head = NULL;
    l -> next = nullptr;
}

void insertHead(list& l , int x)
{
    cell* aux = new cell;
    aux -> head = x;
    if(isEmpty(l))
        aux -> next = nullptr;
    else
    {
        aux -> next = l;
        l = aux;
    }
}

void insertTail(list& l , int x)
{
    cell* aux = new cell;
    aux -> head = x;
    aux -> next = nullptr;

    cell* curr = l;
    while (curr -> next != nullptr)
    {
        curr = curr -> next;
    }
    curr -> next = aux;
}

void print(list l)
{
    cell* aux = l;
    cout << aux -> head << " ";
    print(aux -> next);
}

void dequeue(list& l) //delete last element
{
    cell* curr = l;
    cell* prev = curr;
    while(curr -> next != nullptr)
    {
        prev = curr;
        curr = curr -> next;
    }
    delete curr;
    prev -> next = nullptr;
}