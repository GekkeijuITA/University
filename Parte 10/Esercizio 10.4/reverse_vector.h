#include <vector>
using namespace std;

vector<int> reverse(vector<int>& v)
{
    vector<int> temp;
    for(int i = v.size() - 1 ; i >= 0 ; i--)
    {
        temp.push_back(v[i]);
    }
    return temp;
}