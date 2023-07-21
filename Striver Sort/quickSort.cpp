#include <bits/stdc++.h>
using namespace std;

int partionIdx(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= arr[pivot] && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > arr[pivot] && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIx = partionIdx(arr, low, high);
        quickSort(arr, low, pIx - 1);
        quickSort(arr, pIx + 1, high);
    }
}

int main()
{
    vector<int> arr = {2, 36, 9, 8, 5};

    quickSort(arr, 0, arr.size() - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}