#include <iostream>
using namespace std;
int mySqrtIntPart(int x)
{
    int s = 1;
    int e = x;
    int ans = 0;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
         
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double secondpart(int n, int preci, double x)
{
    float fact = 1;
    for (int i = 0; i < preci; i++)
    {
        fact = fact / 10;

        for (double j = x; j * j < n; j += fact)
        {
            x = j;
        }
    }

    return x;
}
int main()
{   

    cout << "Enter the number " << endl;
    int n;

    cin >> n;

    int x = mySqrtIntPart(n);
    cout << endl
         << secondpart(n, 3, x);

    return 0;
}