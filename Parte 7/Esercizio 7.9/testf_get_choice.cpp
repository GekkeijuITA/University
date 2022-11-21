#include <iostream>
using namespace std;

int get_choice(int);

int main()
{
    cout << get_choice(7) << endl;
    return 0;
}

int get_choice(int max)
{
    int choice;
    cout << "Inserisci una scelta fra 1 e " << max << ": " << endl;
    cin >> choice;
    while(choice < 1 || choice > max)
    {
        cout << "Scelta non valida. Riprova: " << endl;
        cin >> choice;
    }
    return choice;
}