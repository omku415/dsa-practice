#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter the string for whcih you wnat to reverse\n";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str << "\n";
}