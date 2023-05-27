#include <iostream>
#include <vector>
using namespace std;

int search(int arr[], int val, int s, int e)
{
    // base case
    if (s > e)
        return -1;
    if (s == e)
    {
        if (arr[s] == val)
            return s;
        else
            return -1;
    }

    int mid = (s + e) / 2;
    if (arr[mid] == val)
        return mid;

    // recursive case

    // check if the mid is present in line - 1
    if (arr[s] <= arr[mid])
    {
        if (arr[s] <= val && arr[mid] >= val)
            return search(arr, val, s, mid);
        else
            return search(arr, val, mid + 1, e);
    }

    // if the mid is present in line - 2
    else
    {
        if (arr[mid + 1] <= val && arr[e] >= val)
            return search(arr, val, mid + 1, e);
        else
            return search(arr, val, s, mid);
    }
}

int main()
{
    int arr[] = {5, 8, 9, -3, -2, 0, 1, 3};
    int s = 0, e = sizeof(arr) / sizeof(int);
    int val = 1;
    cout << search(arr, val, s, e - 1);

    return 0;
}