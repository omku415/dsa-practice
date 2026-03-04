#include <iostream>
#include <list>
using namespace std;
class stack
{
    list<int> ll;

public:
    void push(int val)
    {
        ll.push_front(val);
    }
    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }
    bool empty()
    {
        return ll.size() == 0;
    }
};

int main()
{
    stack sc;
    sc.push(45);
    sc.push(50);
    while (!sc.empty())
    {
        cout << sc.top() << " ";
        sc.pop();
    }
    cout << "\n";
}