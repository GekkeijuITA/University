/*
    Average of an array with recursion
*/
#include <iostream>
using namespace std;

float avg(float[],int);
void readArray(float[]);

#define N 10
int main(){
    float A[N];
    readArray(A,N);
    cout << "La media e': " << avg(A,N) << endl;
    return 0;
}

float avg(float A[] , int size)
{
    float sum = 0;
    for(int i = 0 ; i < size ; i++)
    {
        sum += A[i];
    }
    return sum/size;
}

void readArray(float A[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << "Inserisci un numero: ";
        cin >> A[i];
    }
}