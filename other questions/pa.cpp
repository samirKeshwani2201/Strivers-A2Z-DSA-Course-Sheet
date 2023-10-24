#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1, j = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        // now print stars

        for (int k = 1; k <= 2 * (i - 1); k++)
        {
            cout << "*";
        }
        int c = n - i + 1;
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << c--;
        }

        cout << endl;
    }
    return 0;
}
