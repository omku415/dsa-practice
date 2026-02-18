#include <iostream>
#include <vector>
using namespace std;
#include <iostream>
using namespace std;

int linearSearch(vector<int> vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int target;
    cout << "Enter the size of vector\n";
    cin >> n;
    //For taking the variable size input we are using the vector to take input .
    vector<int> vec(n);
    cout << "Enter the elemnet of array\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    cout << "Enter the target element\n";
    cin >> target;

    cout << linearSearch(vec, target);
}