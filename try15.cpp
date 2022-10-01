#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
      string str,s=0;
      str=arr[i];
      if(str[i]>s[i])
      {
          s[i]=str[i];
          count++;
      }
    }
    cout<<count;
    return 0;
}    
