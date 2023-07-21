#include <bits/stdc++.h>
using namespace std;

int DtoBpos(int n)
{
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    return ans;
}


int DtoBNeg(int n)
{

    n = abs(n);
    int arr[32] = {0};
    int i = 1;
    while (n != 0)
    {
        int bit = n & 1;
        n = n >> 1;

        arr[32 - i] = bit;
        i += 1;
    }
    bool check = false;
    int fb = -1;
    for (int i = 31; i >= 0; i--)
    {
        if (check == false && arr[i] == 1)
        {
            check = true;
            fb = i;
        }
        if (fb != i && check == true)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
    int ans = 0;
    for (int i = 24; i < 32; i++)
    {
        ans = ans * 10 + arr[i];
    }
    return ans;
}

/// Function to calculate binary of negative integer
int Decimal_to_Binary(int n)
{
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (pow(10, i) * bit) + answer;
        n = n >> 1;
        i += 1;
    }
    return answer;
}
int Binary_of_Negative(int n)
{
    n = abs(n);
    int bin = Decimal_to_Binary(n);

    // storing binary in an array
    int arr[32] = {0};
    int i = 1;
    while (n != 0)
    {
        int bit = n & 1;
        n = n >> 1;
        arr[32 - i] = bit;
        i += 1;
    }
    // Taking 2s compliment
    bool check = false;
    int first_bit = -1;
    // Starting loop from right to left
    for (int i = 31; i >= 0; i--)
    {
        if (check == false && arr[i] == 1)
        { // look for the first 1
            check = true;
            first_bit = i;
        }
        if (first_bit != i && check == true)
        { // First 1 has been found, invert all the other bits
            if (arr[i] == 0)
            { // Inverting bits
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
    int ans = 0;
    for (int i = 24; i < 32; i++) // Representing answer in 8 bit format, because we cannot store full number in integer
        ans = ans * 10 + arr[i];

    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a = Binary_of_Negative(n);
    cout << a << endl;
    return 0;
}
