#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> ngr_recursive(vector<int> &vec, int index = 0, stack<pair<int, int>> s = stack<pair<int, int>>(), vector<int> retVec = vector<int>())
{
    if (index == vec.size())
    {
        return retVec; // Return the result vector when all elements have been processed
    }

    while (!s.empty() && s.top().first < vec[index])
    {
        retVec[s.top().second] = vec[index]; // Update the next greatest element for the elements in the stack
        s.pop();
    }

    s.push({vec[index], index}); // Push the current element along with its index to the stack
    retVec.push_back(-1);        // Default next greatest element as -1

    return ngr_recursive(vec, index + 1, s, retVec); // Recursive call with the updated index, stack, and result vector
}

vector<int> ngr_iterative(vector<int> &vec)
{
    vector<int> retVec;
    stack<int> s;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            retVec.push_back(-1);
        else if (s.size() > 0 && s.top() > vec[i])
            retVec.push_back(s.top());
        else if (s.size() > 0 && s.top() <= vec[i])
        {
            while (s.size() > 0 && s.top() <= vec[i])
                s.pop();
            if (s.size() == 0)
                retVec.push_back(-1);
            else
                retVec.push_back(s.top());
        }
        s.push(vec[i]);
    }
    return retVec;
}

int main()
{
    vector<int> vec = {1, 3, 2, 4};
    for (auto val : ngr_recursive(vec))
        cout << val << endl;
    return 0;
}