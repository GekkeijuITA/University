#include "iovector.h"
#include "cat.h"

int main()
{
    vector<int> first,second,total;
    readVector(first);
    readVector(second);
    printVector(first);
    printVector(second);
    total = cat(first,second);
    printVector(total);
    return 0;
}