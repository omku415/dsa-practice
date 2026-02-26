#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    cout << *p << endl;  // output is 5 because it is defrencing the p pointer and taking out content store on the address of p pointer
    cout << **q << endl; // output is 5 because first it is defrencing the q pointer whiach have the value of address of p and after that it is defrencing the p pointer value which is 5 in this case.
    cout << p << endl;   // printing the address of a;
    cout << *q << endl;  // printing the address of p which have the address of a
    return 0;
}
// output
// 5
// 5
// 0x61ff08
// 0x61ff08