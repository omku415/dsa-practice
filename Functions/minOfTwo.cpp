#include <iostream>
using namespace std;
int minOfTwo(int a, int b) // the value which is in the function is called parameter
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// main function
int main()
{
    cout << "Min:" << minOfTwo(2, 4);
}