#include <iostream>
using namespace std;

int main()
{
    struct Person
    {
        string name;
        string surname;
        string birthYear;
    };

    Person me,you;

    me.name = "Bruce";
    me.surname = "Wayne";
    me.birthYear = "1939";

    you.name = "Clark";
    you.surname = "Kent";
    you.birthYear = "1933";

    me = you;
    cout << "My name is " << me.name << " " << me.surname << endl;
    cout << "I was born in " << me.birthYear << endl;

    return 0;
}