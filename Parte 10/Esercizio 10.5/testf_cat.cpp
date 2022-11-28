#include "iovector.h"

vector<int> cat(vector<int>&,vector<int>&);

int main()
{
    vector<int> v1,v2;
    readVector(v1);
    readVector(v2);
    printVector(cat(v1,v2));
    return 0;
}

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