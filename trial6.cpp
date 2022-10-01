#include<iostream>
#include<string>
using namespace std;

int main()
{ 
    int n,s;
    cin>>n>>s;
    int arr[n];
    if(n%2!=0)
    {
    for(int i=0;i<(n+1)/2;i++)
    {
        arr[i]=2*i+1;
    }
    for(int i=(n+1)/2;i<n;i++)
    {
        for(int j=i-(n+1)/2;j<n;j++)
        {arr[i]=2*j+2;
        break;}
    }
    }
    else
    {
        for(int i=0;i<(n+1)/2;i++)
    {
        arr[i]=2*i+1;
    }
    for(int i=(n+1)/2;i<n;i++)
    {
        for(int j=i-(n+1)/2;j<n;j++)
        {arr[i]=2*j+2;
        break;}
    }
    
       cout<<arr[s-1];
    return 0;
}

    