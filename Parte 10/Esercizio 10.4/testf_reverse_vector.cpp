#include "iovector.h"

vector<int> reverse(vector<int>&);

int main()
{
    vector<int> source;
    vector<int> dest;
    readVector(source);
    printVector(source);
    cout << endl;
    dest = reverse(source);
    printVector(dest);
    return 0;
}

vector<int> reverse(vector<int>& v)
{
    vector<int> temp;
    for(int i = v.size() - 1 ; i >= 0 ; i--)
    {
        temp.push_back(v[i]);
    }
    return temp;
}