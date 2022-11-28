#include "iovector.h"
#include "reverse_vector.h"

int main()
{
    vector<int> source;
    vector<int> dest;
    readVector(source);
    printVector(source);
    cout << endl;
    dest = reverse(source);
    printVector(dest);
    return 0;
}