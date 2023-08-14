#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < N && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < N && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}

void heapSort(vector<int> &arr)
{
    for (int i = arr.size() / 2 - 1; i >= 0; i--)
    {
        heapify(arr, arr.size(), i);
    }
    for (int i = arr.size() - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    vector<int> a = {7, 5, 7, 14, 14, 0, 14, 1, 1};
    heapSort(a);

    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}
