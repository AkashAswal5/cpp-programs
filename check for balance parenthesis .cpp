
// check for balance parenthesis 



#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }

        else
        {
            if (stk.empty())
            {
                return false;
            }

            char top = stk.top();
            stk.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return stk.empty();
}

