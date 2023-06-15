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

int main()
{
    stack<int> s;
    for (auto i : {1, 2, 3, 4})
        s.push(i);

    // cout << "Before inserting at the bottom: " << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    // insertAtBottom(s, 10);

    cout << "After inserting at the bottom: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}