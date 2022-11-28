#include <vector>
using namespace std;

vector<int> insert(vector<int>& v,int i,int val)
{
    vector<int> temp = v;
    int sizeBefore = temp.size();
    if(i < 0 || i > sizeBefore) throw -1;
    int last = temp.back();
    temp.resize(sizeBefore + 1);
    temp[sizeBefore] = last;
    for(int j = sizeBefore - 1 ; j >= i ; j--)
    {
        temp[j] = temp[j-1];
    }
    temp[i] = val;
    return temp;
}