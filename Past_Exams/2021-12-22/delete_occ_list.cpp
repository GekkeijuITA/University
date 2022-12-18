#include <iostream>
using namespace std;

typedef int Elem;

typedef struct cell
{
    Elem head;
    cell* next;
} *lista;

void delete_occ(lista&,Elem);
void delete_all(lista&,Elem);

int main()
{
    return 0;
}

void delete_all(lista& l , Elem el)
{
    if(l == nullptr) return;

    cell* aux = l;
    while(aux != nullptr)
    {
        delete_occ(l , el);
    }
}

void delete_occ(lista& l , Elem el)
{
    cell* cur = l;
    cell* prev;
    while (cur != nullptr && cur -> head != el) //Usciamo con prev settato sulla cella precedente a quella che vogliamo eliminare e curr a quella da eliminare
    {
        prev = cur;
        cur = cur -> next;
    }
    if(cur != nullptr) // Se non è nulla
    {
        if(cur == l) //All'inizio
        {
            l = l -> next;
        }
        else if(cur -> next == nullptr) // In coda
        {
            prev -> next = nullptr;
        }
        else //in mezzo
        {
            prev -> next = cur -> next;
        }
        delete cur;
    }
}