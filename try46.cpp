#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
  int n,c=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
 p:
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
      c++;
  }
  if(c>0)
  {
      goto p;
  }
  else
  {
      cout<<"NO";
      return 0;
  }
  }
      cout<<"YES";
  return 0;
}