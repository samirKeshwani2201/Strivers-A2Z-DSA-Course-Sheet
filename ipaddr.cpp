#include <bits/stdc++.h>
using namespace std;

long long decToBin(int num)
{
    string ans;
    while (num)
    {
        ans += to_string(num % 2);

        num /= 2;
    }
    int sz = ans.size();
    for (int i = sz; i < 8; i++)
    {
        ans += "0";
    }
    reverse(ans.begin(), ans.end());
    return stoi(ans);
}

string setTo8Bit(string s)
{
    int sz = s.length();

    for (int i = sz; i < 8; i++)
    {
        s.insert(0, 1, '0');
    }
    return s;
}

string binaryToDecimal(string bin)
{

    long long num = stoi(bin);
    long long ans = 0;
    int i = 0;

    int rem;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * pow(2, i);
        i++;
    }

    return to_string(ans);
}

string binToDec(string adr)
{

    string last, first;
    string add[4];
    int i = 0;
    int j = 0;
    string firstBin, secondBin, thirdBin, fourthBin;
    while (j < 4)
    {

        while (adr[i] != '.')
        {

            add[j] += adr[i];
            i++;
            if (adr[i] == '/')
            {
                break;
            }
        }
        i++;
        j++;
    }

    firstBin = add[0];
    secondBin = add[1];
    thirdBin = add[2];
    fourthBin = add[3];

    firstBin = binaryToDecimal(firstBin);
    secondBin = binaryToDecimal(secondBin);
    thirdBin = binaryToDecimal(thirdBin);
    fourthBin = binaryToDecimal(fourthBin);

    string ans = firstBin + "." + secondBin + "." + thirdBin + "." + fourthBin;
    cout << "Ans in decimal is " << ans << endl;
    return ans;
}

long long returnTotalRange(string addr)
{
    int i = 0;
    while (addr[i] != '/')
    {
        i++;
    }
    i++;
    string cp;
    for (int j = i; j < addr.length(); j++)
    {
        cp += addr[j];
    }

    int num = stoi(cp);
    return pow(2, (32 - num)) - 2;
}

string setIpNotation(string s)
{
    int j = 0;
    int i = 0;
    s.insert(s.begin() + 8, 1, '.');
    s.insert(s.begin() + 17, 1, '.');
    s.insert(s.begin() + 26, 1, '.');

    return s;
}

void firstAndLast(string adr)
{
    string last, first;
    string add[4];
    int i = 0;
    int j = 0;
    string firstBin, secondBin, thirdBin, fourthBin;
    while (j < 4)
    {

        while (adr[i] != '.')
        {

            add[j] += adr[i];
            i++;
            if (adr[i] == '/')
            {
                break;
            }
        }
        i++;
        j++;
    }

    firstBin = setTo8Bit(to_string(decToBin(stoi(add[0]))));
    secondBin = setTo8Bit(to_string(decToBin(stoi(add[1]))));
    thirdBin = setTo8Bit(to_string(decToBin(stoi(add[2]))));
    fourthBin = setTo8Bit(to_string(decToBin(stoi(add[3]))));

    i = 0;
    while (adr[i] != '/')
    {
        i++;
    }
    i++;
    string cp;
    for (int j = i; j < adr.length(); j++)
    {
        cp += adr[j];
    }
    int num = stoi(cp);

    first = firstBin + secondBin + thirdBin + fourthBin;
    last = first;
    // cout << "Org " << first << endl;
    for (int i = 0; i < 32 - num; i++)
    {
        last.pop_back();
        first.pop_back();
    }

    for (int i = 0; i < 32 - num; i++)
    {

        last += "1";
        first += "0";
    }
    first = setIpNotation(first);
    last = setIpNotation(last);

    binToDec(first);
    binToDec(last);

    // cout << "First " << first << " \n"
    //      << "Last " << last << endl;
}

int main()
{
    cout << "Total range: " << returnTotalRange("190.87.140.200/16") << endl;
    firstAndLast("190.87.140.200/16");
    
    return 0;
}
