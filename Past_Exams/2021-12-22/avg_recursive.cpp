#include <iostream>
using namespace std;

float avg(float[],int);
float avgNice(float[],int);
float sum(float[],int);

const string ERROR = "Bad value";

int main()
{
    float A[5] = {3,5,1,2,4};
    try
    {
        cout << avgNice(A,5) << endl;
    }
    catch(string& err)
    {
        cerr << err << endl;
    }
    return 0;
}

float avg(float A[] , int size)
{
    return sum(A , size) / float(size);
}

float avgNice(float A[] , int size)
{
    if(size <= 0) throw ERROR;
    if(size == 1) return A[0];
    return ((size - 1) * avgNice(A , size - 1) + A[size -1]) / (float)size;
}

float sum(float A[] , int size)
{
    if(size <= 0) throw ERROR;
    if(size == 1) return A[0];
    return A[size - 1] + sum(A,size - 1);
}