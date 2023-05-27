#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int sptr1 = start, sptr2 = mid + 1;

    vector<int> temp;

    while (sptr1 <= mid && sptr2 <= end)
    {
        if (arr[sptr1] >= arr[sptr2])
        {
            temp.push_back(arr[sptr2]);
            sptr2++;
        }
        else
        {
            temp.push_back(arr[sptr1]);
            sptr1++;
        }
    }

    while (sptr1 <= mid)
    {
        temp.push_back(arr[sptr1++]);
    }

    while (sptr2 <= end)
    {
        temp.push_back(arr[sptr2++]);
    }

    int tempIndex = 0;
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[tempIndex++];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main()
{
    int arr[] = {5, 3, 8, 1, 0, 9, 3, 6};
    int s = 0, e = sizeof(arr) / sizeof(int);
    mergeSort(arr, s, e - 1);
    for (auto val : arr)
        cout << val << " ";
    return 0;
}