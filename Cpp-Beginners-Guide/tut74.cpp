// Function Objects(Functors)
// It is a function wrapped in a class
// so that it is available in an object.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {15, 24, 3, 46, 12, 54, 77};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}