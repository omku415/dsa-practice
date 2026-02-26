#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << ptr << '\n';
    cout << &a << "\n";
    cout << &ptr << '\n';
    cout << ptr2 << "\n";
    //*Derefrencing operator
    cout << *(&a) << "\n";
    // It is also printing the same value because in ptr it stote the address of a  and a has value of 10;
    cout << *(ptr);
    return 0;
}