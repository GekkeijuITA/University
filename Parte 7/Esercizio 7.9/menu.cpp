#include <iostream>
#include "menu.h"
using namespace std;

int main()
{
    const string s1 = "Prima scelta";
    const string s2 = "Seconda scelta";
    const string s3 = "Terza scelta";
    const string s4 = "Quarta scelta";
    int answer = use_menu(s1,s2,s3,s4);
    while (answer != 4)
    {
        answer = use_menu(s1,s2,s3,s4);
    }
    return 0;
}