#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int val)
{
    // base case
    if (s.empty())
    {
        s.push(val);
        return;
    }

    // rec case
    int temp = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    // rec case
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, top);
}

int main()
{
    stack<int> s;
    for (auto i : {1, 2, 3, 4})
        s.push(i);

    reverseStack(s);

    cout << "After reversing the stack: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}