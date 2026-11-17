
#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

// Function to define operator precedence
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;

    if (op == '*' || op == '/')
        return 2;

    return 0;
}

// Function to perform arithmetic operations
int calculate(int a, int b, char op)
{
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0)
            {
                cout << "Error: Division by zero!";
                exit(1);
            }
            return a / b;
    }
    return 0;
}

// Infix to Postfix conversion
string infixToPostfix(string infix)
{
    stack<char> s;
    string postfix = "";

    for (char ch : infix)
    {
        if (isalnum(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            if (s.empty())
                throw runtime_error("Mismatched parentheses");

            s.pop();
        }
        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/')
        {
            while (!s.empty() && s.top() != '(' &&
                   precedence(s.top()) >= precedence(ch))
            {
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
        else
        {
            throw runtime_error("Invalid character in expression");
        }
    }

    while (!s.empty())
    {
        if (s.top() == '(')
            throw runtime_error("Mismatched parentheses");

        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Postfix evaluation
int evaluatePostfix(string postfix)
{
    stack<int> s;

    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            s.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/')
        {
            if (s.size() < 2)
                throw runtime_error("Invalid postfix expression");

            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            s.push(calculate(a, b, ch));
        }
        else
        {
            throw runtime_error("Postfix evaluation requires digits");
        }
    }

    if (s.size() != 1)
        throw runtime_error("Invalid postfix expression");

    return s.top();
}

int main()
{
    string infix, postfix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    try
    {
        postfix = infixToPostfix(infix);

        cout << "Postfix Expression: " << postfix << endl;

        cout << "Evaluation Result: "
             << evaluatePostfix(postfix) << endl;
    }
    catch (exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
