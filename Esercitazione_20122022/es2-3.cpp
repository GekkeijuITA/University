#include <iostream>
using namespace std;

typedef string DATA;

struct TESSERA
{
    int id;
    string cognome;
    string nome;
    string telefono;
    DATA scad_tessera;
    TESSERA* next;
};

typedef TESSERA* list;

int main()
{
    return 0;
}

DATA DATA_CORRENTE(){};
bool confronta_date(DATA d1 , DATA d2){};

bool TESSERA_SCADUTA(TESSERA t)
{
    DATA curr = DATA_CORRENTE();
    return confronta_date(t.scad_tessera,curr);
}

TESSERA front(list& l){}; //get first node
void dequeue(list& l){}; //insert node in tail

void RINNOVA(list& l)
{
    TESSERA t = front(l);
    if(!TESSERA_SCADUTA(t)) return;
    dequeue(l);
    t.scad_tessera = DATA_CORRENTE();
}

void STAMPA(list& l)
{
    if(l == nullptr) return;
    cout << l -> id << endl;
    return STAMPA(l -> next);
}