#include <iostream>
using namespace std;

void rever(string &s, int i, int j)
{

    if (i > j)
    {
        return;
    }
    else
    {
        swap(s[i], s[j]);
        i++;
        j--;
        rever(s, i, j);
    }
}

int main()
{
    string s = "Samir";
    rever(s, 0, 4);
    cout << s << endl;

    return 0;
}