#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int priority(char s)
{
    if (s == '^')
        return 3;
    else if (s == '*' || s == '/')
        return 2;
    else if (s == '+' || s == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string exp)
{
    stack<char> st;
    string ans = "";
    int i = 0;
    int n = exp.length();
    while (i < n)
    {
        if (exp[i] >= 'A' && exp[i] <= 'Z' || exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= '0' && exp[i] <= '9')
        {
            ans += exp[i];
        }
        else if (exp[i] == '(')
        {
            st.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && priority(exp[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(exp[i]);
        } 
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    string exp;
    cin >> exp;
    cout << infixToPostfix(exp);
}