#include <iostream>

using namespace std;

int use_menu(string, string, string, string);
int get_choice(int);
void print_menu(string, string, string, string);

int main()
{
    const string s1 = "Prima scelta";
    const string s2 = "Seconda scelta";
    const string s3 = "Terza scelta";
    const string s4 = "Quarta scelta";
    cout << use_menu(s1, s2, s3, s4) << endl;
    return 0;
}

int use_menu(string choice1, string choice2, string choice3, string choice4)
{
    int choice;
    print_menu(choice1, choice2, choice3, choice4);
    choice = get_choice(4);
    return choice;
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

void print_menu(string choice1, string choice2, string choice3, string choice4)
{
    cout << "1  " << choice1 << endl;
    cout << "2  " << choice2 << endl;
    cout << "3  " << choice3 << endl;
    cout << "4  " << choice4 << endl;
}