#include <iostream>
using namespace std;

bool linearSearch(int *arr, int key, int size)
{
    if (size == 0)
    {
        return false;
    }
    else
    {
        if (arr[0] == key)
        {
            return true;
        }
        else
        {
            return linearSearch(arr + 1, key, size - 1);
        }
    }
}
int sum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int s = arr[0] + sum(arr + 1, size - 1);

        return s;
    }
}

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{

    int arr[5] = {0, 2, 3, 4, 5};
    cout << sum(arr, 5);
    cout << endl
         << linearSearch(arr, 0, 5);
    return 0;
}