/*
    Average of an array with recursion
*/
#include <iostream>
using namespace std;

float avg(float[],int);
void readArray(float[],int);
float recoursive_sum(float[],int);

#define N 10
int main(){
    float A[N];
    readArray(A,N);
    cout << "La media e': " << avg(A,N) << endl;
    return 0;
}

float avg(float A[] , int size)
{
    string ERROR = "Bad size";
    if (size <= 0) throw ERROR;
    if (size == 1) return A[size-1]; 

    return recoursive_sum(A,size)/size;
}

float recoursive_sum(float A[], int size) 
{
    string ERROR = "Bad size";
    if (size<=0) throw ERROR;
    if (size==1) return A[size-1];
    return A[size-1]+recoursive_sum(A,size-1);
}

void readArray(float A[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << "Inserisci un numero: ";
        cin >> A[i];
    }
}