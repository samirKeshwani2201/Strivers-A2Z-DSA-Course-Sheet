#include <iostream>
using namespace std;

int fin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fin(n - 1) + fin(n - 2));
    }
}
int main()
{
    int n;
    cin >> n;
    cout<<fin(n);

    return 0;
}