#include <iostream>
using namespace std;


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

void print_menu(string choice1, string choice2, string choice3, string choice4)
{
    cout << "1  " << choice1 << endl;
    cout << "2  " << choice2 << endl;
    cout << "3  " << choice3 << endl;
    cout << "4  " << choice4 << endl;
}

void print_choice(int n, string ch1, string ch2, string ch3, string ch4)
{
    cout << "\nScelta effettuata: ";
    switch(n)
    {
        case 1:
            cout << ch1;
            break;
        case 2:
            cout << ch2;
            break;
        case 3:
            cout << ch3;
            break;
        case 4:
            cout << ch4;
            break;
    }
    cout << endl;
}

int use_menu(string choice1, string choice2, string choice3, string choice4)
{
    int choice;
    print_menu(choice1, choice2, choice3, choice4);
    choice = get_choice(4);
    print_choice(choice, choice1, choice2, choice3, choice4);
    return choice;
}