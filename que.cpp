#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    while (n)
    {
        int dig = n % 10;

        if (ans > INT32_MAX / 10)
        {
            return 0;
        }
        if (ans < INT32_MIN / 10)
        {
            return 0;
        }
        ans = 10 * ans + dig;

        n = n / 10;
    }

    cout << ans << endl;
    return 0;
}