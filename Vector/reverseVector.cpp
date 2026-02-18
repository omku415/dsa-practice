#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << "\n";
}

int main()
{
    int n;
    cout << "Enter the size of the vector\n";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elemnt of the vector\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

     reverseVector(vec);

    for(int i = 0; i< vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}