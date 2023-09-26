#include <iostream>
using namespace std;

void subsets(string ip, string op, int index)
{
    if (index == -1)
    {
        cout << (op == "" ? "NULL" : op) << endl;
        return;
    }
    subsets(ip, op + ip[index], index - 1);
    subsets(ip, op, index - 1);
}

int main()
{
    string ip = "abc", op = "";
    subsets(ip, op, ip.size() - 1);
    return 0;
}