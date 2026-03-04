#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    bool isSwap;
    for (int i = 0; i < n; i++)
    {
        isSwap = false;
        for (int j = 0; j < n - i-1; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            break;
    }
}
int main()
{
    vector<int> v = {4, 2, 1, 6, 8, 9};
    bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}