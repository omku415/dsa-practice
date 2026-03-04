#include <iostream>
#include <vector>
using namespace std;

class stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }

    int top()
    {
        return vec[vec.size() - 1];
    }

    bool empty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    stack sc;

    sc.push(9);
    sc.push(10);
    sc.push(50);
    while (!sc.empty())
    {
        cout << sc.top() << " ";
        sc.pop();
    }
    cout << "\n";
}