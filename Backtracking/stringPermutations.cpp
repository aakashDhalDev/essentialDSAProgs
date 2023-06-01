#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPermutations(string input, int i, int j)
{
    // base case
    if (i == j)
    {
        cout << input << endl;
        return;
    }

    // recursive case
    for (int idx = i; idx <= j; idx++)
    {
        swap(input[idx], input[i]);
        findPermutations(input, i + 1, j);
        swap(input[idx], input[i]);
    }
}

int main()
{
    char input[100];
    cin >> input;
    string temp(input);
    findPermutations(temp, 0, temp.size() - 1);
    return 0;
}