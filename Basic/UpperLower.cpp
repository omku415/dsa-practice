#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character you want to check\n";
    cin >> ch;
    //normally we cannot compare character to an integer but the character we are taking it get stored in form of ASCII value which is integer only so we can do this 
    if (ch >= 65 && ch <= 97)
    {
        cout << "character is upper case";
    }
    else
    {
        cout << "character is lowercase";
    }
    return 0;
}