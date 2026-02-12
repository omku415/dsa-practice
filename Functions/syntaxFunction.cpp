#include <iostream>
using namespace std;
//this is called function definition 
int printHello()
{
    cout << "Hello World\n";
    return 3;
}
int main()
{
//this is called function invoke or call
    int val = printHello();
    cout << val << "\n";
    return 0;
}