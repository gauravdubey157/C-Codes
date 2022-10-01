#include<iostream>
using namespace std;

int main()
{
 int n, k, temp, count=0;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 for(int i=0;i<n-1;i++)
 {
    for(int j=i+1;j<n;j++)
    {
      if(((arr[i]+arr[j])%k==0) && (i<j))
      {
          count++;
      }
    }  
 }
 cout<<count;
 return 0;
}