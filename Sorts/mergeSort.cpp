#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;

    for (int i = 0; i < len1; i++)
    {
        second[i] = arr[k++];
    }

    // Now merging the 2 sorted array
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    if (s >= e)
    {
        return;
    }
    // sort the left part
    mergeSort(arr, s, mid);
    // sort the right part
    mergeSort(arr, mid + 1, e);

    // merge the two sorted parts

    merge(arr, s, e);
}
int main()
{
    // mergeSort(arr,0,n-1);
    return 0;
}