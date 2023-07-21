#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_cnt = 0;

    i = left;
    j = right;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_cnt += (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }


    for(int i=left;i<=right;i++)
    {
        arr[i]=temp[i];
    }
    return inv_cnt;
    
}
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, invCnt = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        invCnt += _mergeSort(arr, temp, left, mid);
        invCnt += _mergeSort(arr, temp, mid + 1, right);
        invCnt += merge(arr, temp, left, mid + 1, right);
    }
    return invCnt;
}
int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int ans = _mergeSort(arr, temp, 0, n - 1);
    cout << ans << endl;

    return 0;
}