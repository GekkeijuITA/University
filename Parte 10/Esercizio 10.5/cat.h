#include <vector>
using namespace std;

vector<int> cat(vector<int>& v1,vector<int>& v2)
{
    vector<int> temp;
    temp = v1;
    for(int i = 0 ; i < v2.size() ; i++)
    {
        temp.push_back(v2[i]);
    }
    return temp;
}