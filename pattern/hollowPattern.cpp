#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of the pattern\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // this is first part of pattern in which we are printing the spaces which is like inverted triangle thats why the upper limit is n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        // this condition is given because in first line of pattern there is no space and no second star
        if (i != 0)
        {
            // the upper limit of loop is given 2*i-1 because it is print odd no of space and for odd no space that is the formula
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    // bottom part of the pattern
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        //this is because we have to stop ruuning the last loop if we give n-1 it will print one more star in last line 
        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j += 1)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
