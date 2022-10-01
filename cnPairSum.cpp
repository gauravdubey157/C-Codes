#include<iostream>
using namespace std;

int pairSum(int a[],int n,int x)
{
    int p=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                p++;
            }
        }
    }
    return p;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int size;
        int x;

        cin>>size;

        int *input=new int[size];

        for(int i=0;i<size;i++)
        {
            cin>>input[i];
        }
        cin>>x;
        cout<<pairSum(input, size, x)<<endl;
        delete [] input;
    }
    return 0;
}