#include <bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr, int key, int low, int high)
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

 
int main()
{
    vector<int> arr;
    int n = 1000000;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i + 1);
    }

    clock_t start, end;
    start = clock();
    cout << LinearSearch(arr, n);
    //    cout<< binarySearch(arr,n/2, 0, n);
    end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time :" << time;

    return 0;
}