#include <iostream>
using namespace std;

int countPairs(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;
    if (n == 2)
        return 2;

    // recursive case
    return countPairs(n - 1) + ((n - 1) * countPairs(n - 2));
}

int main()
{
    int n = 5;
    int totalWays = countPairs(n);
    cout << "Total number of ways: " << totalWays << endl;

    return 0;
}