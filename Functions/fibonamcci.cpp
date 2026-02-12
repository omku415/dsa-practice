#include <iostream>
using namespace std;
int fib(int n)
{
    int first = 0;
    int second = 1;
    if(n<0){
        cout<<"it is not valid give number greater that or equal to zero\n ";
    }

    for (int i = 0; i <= n; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter the upper limit of fibonacci\n";
    cin >> n;
    fib(n);
}