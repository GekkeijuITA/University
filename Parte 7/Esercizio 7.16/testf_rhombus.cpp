#include <iostream>
using namespace std;

void rhombus(int);
void replicate2_line(int,int,char,char);

int main()
{
    int n;
    cout << "Inserisci un numero maggiore di 0: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Errore! Inserire un numero maggiore di 0: ";
        cin >> n;
    }
    rhombus(n);
    return 0;
}

void rhombus(int n)
{
    for(int i = 0 ; i < n+1 ; i++)
    {
        replicate2_line(n-i,i*2+1,' ','*');
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        replicate2_line(n-i,i*2+1,' ','*');
    }
}
void replicate2_line(int f, int s, char f_c, char s_c)
{
    for(int i = 0 ; i < f ; i++)
    {
        cout << f_c;
    }
    for(int i = 0 ; i < s ; i++)
    {
        cout << s_c;
    }
    cout << endl;
}