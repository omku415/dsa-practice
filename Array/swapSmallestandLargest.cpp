#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minindex = 0;
    int maxindex = 0;
    int array[5];
    cout << "Enter the elemet of array\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            minindex = i;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            maxindex = i;
        }
    }

    swap(array[minindex], array[maxindex]);

    for (int i = 0; i < 5; i++)
    {
        cout << array[i]<<" ";
    }
}