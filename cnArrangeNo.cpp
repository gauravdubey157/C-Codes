#include<iostream>
using namespace std;

void arrange(int arr[], int n)
{
    int b=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            arr[b]=i;
            b++;
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            arr[b]=i;
            b++;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int *arr=new int[n];
        arrange(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete [] arr;
    }
    return 0;
}