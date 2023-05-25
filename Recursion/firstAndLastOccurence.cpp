// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    if (n == 0)
        return -1;
    if (arr[0] == key)
        return 1;
    int index = firstOccurence(arr + 1, n - 1, key);
    if (index == -1)
        return -1;
    else
        return index + 1;
}

int lastOccurence(int arr[], int n, int key)
{
    if (n == 0)
        return -1;
    int index = lastOccurence(arr + 1, n - 1, key);
    if (index == -1)
    {
        if (arr[0] == key)
            return 1;
        else
            return -1;
    }
    return index + 1;
}

int main()
{
    // Write C++ code here
    int arr[] = {2, 8, 4, 6, 1, 6, 3};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;
    cout << firstOccurence(arr, n, key) << endl;
    cout << lastOccurence(arr, n, key);
    return 0;
}