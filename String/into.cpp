#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    char str[10];
    char str2[100];
    // cout << "Enter the string\n";
    // // The problem with cin is that after the white space or space that part is excluded
    // cin >> str;
    // cout << str<<"\n";
    cout << "Enter the value of string 2\n ";
    // thsi method of input takes the all thing until the length is over ..
    cin.getline(str2, 100,'$');
    cout << str2 << "\n";
}
