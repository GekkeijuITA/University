#include "iovector.h"

vector<int> insert(vector<int>&,int,int);

int main()
{
    vector<int> v;
    readVector(v);
    printVector(v);
    try
    {
        v = insert(v,2,-1);
    }
    catch(int& code)
    {
        cout << "Error code: " << code << endl;
        cerr << "Something went wrong - fix program";
    }
    printVector(v);
    return 0;
}

vector<int> insert(vector<int>& v,int i,int val)
{
    int code = -1;
    vector<int> temp = v;
    int sizeBefore = temp.size();
    if(i < 0 || i > sizeBefore) throw code;
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