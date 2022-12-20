#include <iostream>
using namespace std;

typedef struct turista
{
    string cf;
    string cognome;
    string nome;
    string nazionalita;
    turista* next;
} *insieme_di_turisti;


bool StessoTurista(turista,turista);
void InserisciTurista(insieme_di_turisti&,string,string,string,string);
void CancellaTurista(turista,insieme_di_turisti&);
bool InsiemeVuoto(insieme_di_turisti);
void StampaInsiemeTuristi(insieme_di_turisti);
insieme_di_turisti UnioneTraInsiemi(insieme_di_turisti,insieme_di_turisti);

int main()
{
    insieme_di_turisti i1,i2,i3;
    string cf,cognome,nome,nazionalita;
    int answ;
    do
    {
        cout << "Inserisci cf: ";
        cin >> cf;
        cout << "Inserisci cognome: ";
        cin >> cognome;
        cout << "Inserisci nome: ";
        cin >> nome;
        cout << "Inserisci nazionalita': ";
        cin >> nazionalita;
        InserisciTurista(i1,cf,cognome,nome,nazionalita);
        cout << "Vuoi continuare?" << endl;
        cin >> answ;
    } while (answ != -1);

    do
    {
        cout << "Inserisci cf: ";
        cin >> cf;
        cout << "Inserisci cognome: ";
        cin >> cognome;
        cout << "Inserisci nome: ";
        cin >> nome;
        cout << "Inserisci nazionalita': ";
        cin >> nazionalita;
        InserisciTurista(i2,cf,cognome,nome,nazionalita);
        cout << "Vuoi continuare?" << endl;
        cin >> answ;
    } while (answ != -1);

    i3 = UnioneTraInsiemi(i1,i2);

    if(i3 == nullptr)
        cout << "Vuoto" << endl;
    else
    {
        cout << "Qualcosa" << endl;
        StampaInsiemeTuristi(i3);
    }
        
    return 0;
}

void InserisciTurista(insieme_di_turisti& i , string cf , string cognome , string nome , string nazionalita)
{
    turista* aux = new turista;
    aux -> cf = cf;
    aux -> cognome = cognome;
    aux -> nome = nome;
    aux -> nazionalita = nazionalita;
    i = aux;
}

void StampaInsiemeTuristi(insieme_di_turisti i)
{
    turista* aux = i;
    string cf,cognome,nome,nazionalita;
    while (aux != nullptr)
    {
        cf = aux -> cf;
        cognome = aux -> cognome;
        nome = aux -> nome;
        nazionalita = aux -> nazionalita;
        cout << "Turista: " << cf << " | " << cognome << " | " << nome << " | " << nazionalita << endl;
        aux = aux -> next;
    }
}

bool StessoTurista(turista t1 , turista t2)
{
    return t1.cf == t2.cf;
}

insieme_di_turisti UnioneTraInsiemi(insieme_di_turisti i1 , insieme_di_turisti i2)
{
    turista* aux = i1;
    while (aux != nullptr)
    {
        aux = aux -> next;
    }
    aux -> next = i2;

    return i1;
}