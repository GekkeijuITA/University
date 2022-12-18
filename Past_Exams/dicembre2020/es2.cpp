#include <iostream>
using namespace std;

struct cell
{
    char movement;
    cell *next;
};

typedef cell* list;

void FaiUnPasso(list&,char);
void FaiUnPassoIndietro(list&);
void Stampa(list&);
char Direzione(list&);

int main()
{
    list l = nullptr;
    FaiUnPasso(l,'U');
    FaiUnPasso(l,'D');
    FaiUnPasso(l,'L');
    FaiUnPasso(l,'D');
    Stampa(l);
    cout << endl;
    cout << "Ultima direzione: " << Direzione(l) << endl;
    FaiUnPassoIndietro(l);
    Stampa(l);
    cout << "Ultima direzione: " << Direzione(l) << endl;
    return 0;
}

void FaiUnPasso(list& l , char cmd)
{
    //Cell with command
    cell* aux = new cell;
    aux -> movement = cmd;
    aux -> next = nullptr;

    if(l == nullptr)
    {
        l = aux;
        return;
    }

    //Find last cell
    cell* prev = l;
    while(prev -> next != nullptr)
    {
        prev = prev -> next;
    }
    prev -> next = aux;
}

void FaiUnPassoIndietro(list& l)
{
    //Find last and previous cell
    cell* aux = l;
    cell* prev;
    while (aux -> next != nullptr)
    {
        prev = aux;
        aux = aux -> next;
    }

    prev -> next = nullptr;
    delete aux;
}

void Stampa(list& l)
{
    cell* aux = l;
    while (aux != nullptr)
    {
        cout << aux -> movement << endl;
        aux = aux -> next;
    }
}

char Direzione(list& l)
{
    cell* aux = l;
    while(aux -> next != nullptr)
    {
        aux = aux -> next;
    }  
    return aux -> movement;
}