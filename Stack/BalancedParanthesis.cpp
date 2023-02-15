#include <iostream>
#include <stack>

using namespace std;

bool match(char a, char b)
{
    return ((a == '(' && b == ')') ||
            (a == '{' && b == '}') ||
            (a == '[' && b == ']'));
}

int main()
{

    char str[] = "{}(([]))";
    int n = sizeof(str) / sizeof(str[0]);
    
    stack<char> stack;

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if ((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
        {
            stack.push(str[i]);
        }
        else
        {
            if (stack.empty())
            {
                flag = false;
                break;
            }
            if (!match(stack.top(), str[i]))
            {
                flag = false;
                break;
            }
            else
            {
                stack.pop();
            }
        }
    }

    cout << boolalpha << flag;
}