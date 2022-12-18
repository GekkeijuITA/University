#include "iovector.h"
#include "cat.h"

vector<int> cat(vector<int>& v1,vector<int>& v2)
{
    vector<int> temp;
    temp = v1;
    for(unsigned int i = 0 ; i < v2.size() ; i++)
    {
        temp.push_back(v2[i]);
    }
    return temp;
}