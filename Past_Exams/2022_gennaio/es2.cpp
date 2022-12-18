#include <iostream>
#include <vector>
using namespace std;

typedef int coda_di_Elem;

void enqueue(vector<coda_di_Elem>&,coda_di_Elem);
void dequeue(vector<coda_di_Elem>&);
coda_di_Elem front(vector<coda_di_Elem>);

const string ERROR = "Bad value";

int main()
{
    vector<coda_di_Elem> v(5);
    for(int i = 0 ; i < v.size() ; i++)
    {
        v[i] = i;
    }
    dequeue(v);
    return 0;
}

void dequeue(vector<coda_di_Elem>& v)
{
    if(v.size() <= 0) throw ERROR;
    if(v.size() == 1) 
    {
        v.clear();
        return;
    }

    vector<coda_di_Elem> aux;
    
    for(int i = 1 ; i < v.size() ; i++)
    {
        aux.push_back(v[i]);
    }

    v.clear();
    v = aux;
}