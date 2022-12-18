#include <iostream>
using namespace std;

typedef struct cell
{
    int head;
    cell  *next;
} *list;

int count(const list&);
bool isEven(const list&);
void head(list&,int);
void print(const list&);

const string ERROR = "Bad value";

int main()
{
    list l1;
    int n;
    cout << "Inserisci numero (negativo per terminare):";
    cin >> n;
    while (n >= 0)
    {
        head(l1,n);
        cout << "Inserisci numero (negativo per terminare):";
        cin >> n;
    }

    print(l1);
    //cout << "Lunghezza: " << count(l1) << endl;
    cout << boolalpha << isEven(l1);
    return 0;
}

void head(list& l , int x)
{
    cell* aux = new cell;
    aux -> head = x;
    aux -> next = l;
    l = aux;
}

int count(const list& l)
{
    if(l == nullptr) return 0;
    return count(l -> next) + 1;
}

bool isEven(const list& l)
{
    if(l == nullptr) return false;
    cell* aux = l;
    while(aux != nullptr)
    {
        if((aux -> head % 2) != 0) return false;
        aux = aux -> next;
    }
    return true;
}

void print(const list& l)
{
    cell* aux = l;
    while(aux != nullptr)
    {
        cout << aux -> head << endl;
        aux = aux -> next;
    }
}