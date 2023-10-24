#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;

    int mid =s+ (e-s)/2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid =s+ (e-s)/2;
    }
    return -1;
}
int main()
{

    return 0;
}