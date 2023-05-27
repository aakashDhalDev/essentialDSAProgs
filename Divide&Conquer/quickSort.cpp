#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int start, int end)
{
    int i = start - 1, j = start, pivot = end;
    while (j < end)
    {
        if (arr[j] >= arr[pivot])
            j++;
        else
            swap(arr[++i], arr[j++]);
    }
    swap(arr[i + 1], arr[pivot]);
    pivot = i + 1;
    return pivot;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
        return;

    // recursive case
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}
int main()
{
    int arr[] = {5, 3, 8, 1, 0, 9, -3, 6};
    int s = 0, e = sizeof(arr) / sizeof(int);
    quickSort(arr, s, e - 1);
    for (auto val : arr)
        cout << val << " ";
    return 0;
}