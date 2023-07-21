#include <iostream>
using namespace std;

int main()
{
    int amt;
    cin >> amt;
    int k=1;
    // 100 50 20 1
    int notes100;
    int notes50;
    int notes20;
    int notes1;
    switch (k)
    {
    case 1:
        notes100 = amt / 100;
        cout <<"note 100   " <<notes100 << endl;
        amt = amt - 100 * notes100;
        if (amt ==0)
        {
            break;
        }
    case 2:
        if (amt > 0)
        {
         notes50 = amt / 50;
            cout <<"note 50 " << notes50 << endl;
            amt = amt - 50 * notes50;
            if (amt == 0)
            {
                break;
            }
        }
    case 3:
     if (amt > 0)
        {
            notes20 = amt / 20;
            cout<<"note 20 " << notes20 << endl;
            amt = amt - 20 * notes20;
            if (amt == 0)
            {
                break;
            }
        }

    case 4:
    if (amt > 0)
        {
            notes1 = amt / 1;
            cout<<"note 1 " << notes1 << endl;
            amt = amt - 1 * notes1;
            if (amt == 0)
            {
                break;
            }
        }

    }
    return 0;
}