#include <iostream>
using namespace std;

int CountOccurrences(int[],int,int);

const string ERROR = "Bad value";

int main()
{
    int A[] = {1,1,3,4,5,6};
    cout << CountOccurrences(A,6,1);
    return 0;
}

int CountOccurrences(int A[] , int size , int val)
{
    if(size < 0) throw ERROR;
    if(A[size - 1] != val) return 0;
    return CountOccurrences(A , size - 1 , val) + 1;
}