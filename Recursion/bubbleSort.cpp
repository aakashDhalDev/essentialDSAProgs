#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int i, int j)
{
    int temp;
    // base case
    if (i == 1 || i == 0)
    {
        return;
    }

    // recursive case
    if (j == i - 1)
    {
        bubbleSortRecursive(arr, i - 1, 0);
        return;
    }

    if (arr[j + 1] < arr[j])
    {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    bubbleSortRecursive(arr, i, j + 1);
}

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 8, 4, 6, 1, 6, 3};
    int n = sizeof(arr) / sizeof(int);
    bubbleSortRecursive(arr, n, 0);
    for (auto val : arr)
        cout << val << " ";
    return 0;
}