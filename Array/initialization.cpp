#include <iostream>
using namespace std;
int main()
{
    int array[5];
    // if size is given then we can run a loop if it is not given then we can calculate it with sizeof(array);
    // the size of array return the no of byte  taken by the array whaich
    cout << sizeof(array) << "\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\n";
    }
}