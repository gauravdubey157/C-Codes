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
  }
  for(int i=0;i<n-1;i++)
  {
  if(arr[i]==arr[i+1])
  {
      goto jump;
  }
  else
  {
      count++;
  }
  }
  if(n==1)
  {
      cout<<"YES";
  }
  else if(count!=0)
   {
    cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
  return 0;
}