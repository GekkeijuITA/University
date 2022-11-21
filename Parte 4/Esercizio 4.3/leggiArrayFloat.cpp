#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    float a[N];
    for(int i = 0 ; i < N ; i++)
    {
        float val;
        cout << "Valore n. " << i << ": ";
        cin >> val;
        a[i] = val;
    }
    return 0;
}