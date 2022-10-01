#include<bits/stdc++.h>
using namespace std;
                                                 //half copied program
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
    if(i%3==1)
    {
        sum1+=arr[i];
    }
    else if(i%3==2)
    {
        sum2+=arr[i];
    }
    else
    {
        sum3+=arr[i];
    }
    }
    if(sum1>sum2 && sum1>sum3)
    {
        cout<<"chest";
    }
    else if(sum2>sum3 && sum2>sum1)
    {
        cout<<"biceps";
    }
    else if(sum3>sum1 && sum3>sum2)
    {
        cout<<"back";
    }
    return 0;
}