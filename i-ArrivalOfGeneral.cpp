#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN, min=INT_MAX,a=INT_MAX,b=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
    {
        max=arr[i];
        a=i;
    }
    else if(max==arr[i])
    {
      if(a>i)
      {
        a=i;
      }
    }
        if(min>arr[i])
    {
        min=arr[i];
        b=i;
    }
    else if(min==arr[i])
    {
      if(b<i)
      {
        b=i;
      }
    }
    }
    if(a>b)
    {
        cout<<a+n-1-b-1;
    }
    else
    {
        cout<<a+n-1-b;
    }
    return 0;
}