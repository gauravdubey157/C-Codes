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
  jump:
  for(int i=0;i<n-2;i++)
  {
    if(arr[i]==arr[i+1])
    {
        int temp=arr[i+2];
        arr[i+2]=arr[i+1];
        arr[i+1]=temp;
    }
    else
    {
      count++;
    }
    
  }
  for(int i=0;i<n-1;i++)
  {
  if(arr[i]==arr[i+1])
  {
    goto jump;
  }
  }
  for(int i=0;i<n-1;i++)
  {
if(arr[i]==arr[i+1])
{
    cout<<"NO";
    break;
}
else
{
    cout<<"Yes";
    break;
}
  }
  return 0;
}