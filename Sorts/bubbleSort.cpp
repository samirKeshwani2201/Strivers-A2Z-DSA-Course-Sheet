#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>arr,int n)
{
for(int i=1;i<n;i++)    
{
    bool swapped=false;
    for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swapped=true;

            swap(arr[j],arr[j+1]);

        }
    }
    if(swapped==false)
    {
        break;
        
    }
}
}
int main(){
    
    return 0;
}