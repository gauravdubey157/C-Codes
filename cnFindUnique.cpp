#include<iostream>
using namespace std;

int findunique(int a[],int n)
{
    int b=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            b=a[i];
        }
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;

        int *arr=new int[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<findunique(arr,size)<<endl;
    }
    return 0;
}