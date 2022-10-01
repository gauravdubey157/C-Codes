#include<iostream>
using namespace std;

void sortZeroesAndOne(int a[],int n)
{
    int q=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<a[i]<<" ";
        }
        else
        {
            q++;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout<<1<<" ";
    }
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
        sortZeroesAndOne(input, size);
        delete [] input;
    }
    return 0;
}