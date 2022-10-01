#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int m=n;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+j)==(n-1))
            {
                d1=d1+arr[i][j];
            }
            if(i==j)
            {
                d2=d2+arr[i][j];
            }
        }
    }
    if(d1>d2)
    {cout<<(d1-d2);}
    else
    {cout<<(d2-d1);}
    return 0;
}