#include<iostream>
using namespace std;
 
int main()
{
    long long int s,n,count=0, temp1, temp2;
    cin>>s>>n;
    long long int arr[2*n];
    for(long long int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    for(long long int j=1;j<n;j++)
{
    for(long long int i=0;i<n-j;i++)
{
    if(arr[2*i]>arr[2*i+2])
{
    temp1=arr[i];
    arr[2*i]=arr[2*i+2];
    arr[2*i+2]=temp1;
    temp2=arr[2*i+1];
    arr[2*i+1]=arr[2*i+3];
    arr[2*i+3]=temp2;
}
}
}
    for(long long int i=0;i<n;i++)
    {
    if(s>arr[2*i])
    {
        s=s+arr[2*i+1];
        count++;
    }
    }
    if(count==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}