#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    float v[N],sum = 0;
    for(int i = 0 ; i < N ; i++)
    {
        float val;
        cout << "Valore n. " << i << ": ";
        cin >> val;
        v[i] = val;
    }
    for(int i = 0 ; i < N ; i++)
    {
        sum += v[i];
    }
    cout << "Media: " << sum/N << endl;
    return 0;
}
