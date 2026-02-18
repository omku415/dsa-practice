#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "om";
    string str2 = "Kumar";
    // In this we are doing concatenation
    cout << str1 + str2<<"\n";
    // In this we are doing comparison between the string
    cout << (str1 == str2) << "\n";
    // In this we are doing comparison which is greater or smaller
    cout << (str1 < str2) << "\n";
    return 0;
}