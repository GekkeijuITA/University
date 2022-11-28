#include "iovector.h"
#include "insert.h"

int main(){
    //a
    vector<int> v;
    //b
    readVector(v);
    //v.insert(v,0,-1)
    //c
    //v.insert(v,v.size(),-1)
    //d
    //v = insert(v,3,-1);
    //e
    //v = insert(v,70,-1);
    try
    {
        v = insert(v,0,-1);
    }
    catch(int& code)
    {
        cout << "Error code: " << code << endl;
        cerr << "Something went wrong - fix program\n";
    }
    printVector(v);
    return 0;
}