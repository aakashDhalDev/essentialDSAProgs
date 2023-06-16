#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    for (auto i : {100, 80, 60, 70, 60, 75, 85})
    {
        s.push(i);
    }

    cout << "Stock Prices: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}