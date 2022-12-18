#include "reverse_vector.h"
#include "iovector.h"

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