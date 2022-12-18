#include <iostream>
using namespace std;

struct Indirizzo
{
    string via;
    string numero_civico;
    string CAP;
    string citta;
};

struct Cliente
{
    string codice_fiscale;
    string cognome;
    string nome;
    Indirizzo indirizzo;
};

bool inSameZone(Cliente,Cliente);

int main()
{
    return 0;
}

bool inSameZone(Cliente c1 , Cliente c2)
{
    return c1.indirizzo.CAP == c2.indirizzo.CAP;
}