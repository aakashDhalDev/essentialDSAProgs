#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPermutations(string input, int i, int j, vector<string> &perms)
{
    // base case
    if (i == j)
    {
        perms.push_back(input);
        return;
    }

    // recursive case
    for (int idx = i; idx <= j; idx++)
    {
        swap(input[idx], input[i]);
        findPermutations(input, i + 1, j, perms);
        swap(input[idx], input[i]);
    }
}

int main()
{
    char input[100];
    cin >> input;
    string temp(input);
    vector<string> perms;
    findPermutations(temp, 0, temp.size() - 1, perms);
    for (string perm : perms)
        cout << perm << endl;
    return 0;
}