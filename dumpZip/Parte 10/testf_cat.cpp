#include "iovector.h"
#include "cat.h"

int main()
{
    vector<int> v1,v2;
    readVector(v1);
    readVector(v2);
    printVector(cat(v1,v2));
    return 0;
}