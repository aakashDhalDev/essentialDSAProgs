#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}

void findSubsets(char *input, char *output, int i, int j, vector<string> &list)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        list.push_back(temp);
        return;
    }

    // recursive case
    output[j] = input[i];
    // include the incomming character
    findSubsets(input, output, i + 1, j + 1, list);

    // exclude the incomming character
    findSubsets(input, output, i + 1, j, list);
}

int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;
    findSubsets(input, output, 0, 0, list);
    sort(list.begin(), list.end(), compare);
    for (auto val : list)
        cout << val << endl;
    return 0;
}