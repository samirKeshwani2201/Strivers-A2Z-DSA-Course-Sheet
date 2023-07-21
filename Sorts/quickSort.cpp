#include <bits/stdc++.h>
using namespace std;


int partition(int arr[], int s, int e)
{
    
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    // place at right position
    int pivotIndex = s + cnt;

    swap(arr[pivotIndex], arr[s]);

    // Now adjusting the left and right parts acccording to the need
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // basecase
    if (s >= e)
    {
        return;
    }
    // partition
    int p = partition(arr, s, e);

    // left part sort karege
    quickSort(arr, s, p - 1);

    // right part sort karege
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[7] = {2, 4,4, 1, 1, 6, 9};
    int n = 7;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}