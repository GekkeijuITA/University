#include <iostream>
using namespace std;

int main()
{
    struct Time
    {
        int h;
        int m;
        int s;
    };
    Time t1,t2;
    int dh,dm,ds;

    cout << "Inserisci il primo orario: " << endl;
    do
    {
        cout << "Ore: ";
        cin >> t1.h;
    } while (t1.h < 0 || t1.h > 23);
    do
    {
        cout << "Minuti: ";
        cin >> t1.m;
    } while (t1.m < 0 || t1.m > 59);
    do
    {
        cout << "Secondi: ";
        cin >> t1.s;
    } while (t1.s < 0 || t1.s > 59);    


    cout << "Inserisci il secondo orario: " << endl;
    do
    {
        cout << "Ore: ";
        cin >> t2.h;
    } while (t2.h < 0 || t2.h > 23);
    do
    {
        cout << "Minuti: ";
        cin >> t2.m;
    } while (t2.m < 0 || t2.m > 59);
    do
    {
        cout << "Secondi: ";
        cin >> t2.s;
    } while (t2.s < 0 || t2.s > 59); 

    if(t2.h > t1.h)
    {
        dh = t2.h - t1.h;
    } 
    else
    {
        dh = t1.h - t2.h;
    }
    if(t2.m > t1.m)
    {
        dm = t2.m - t1.m;
    } 
    else
    {
        dm = t1.m - t2.m;
    }
    if(t2.s > t1.s)
    {
        ds = t2.s - t1.s;
    } 
    else
    {
        ds = t1.s - t2.s;
    }    

    cout << "Il tempo trascorso tra i due orari e' di ";
    if(dh < 10)
    {
        cout << "0";
    }
    cout << dh << ":";
    if(dm < 10)
    {
        cout << "0";
    }
    cout << dm << ":";
    if(ds < 10)
    {
        cout << "0";
    }
    cout << ds;

    return 0;
}