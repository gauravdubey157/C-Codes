#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
          cout<<" ";   
        }
        if(i<n/2)
        {
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2+1)
        {
        for(int j=n/2;j>=i;j--)
        {
          cout<<" ";   
        }
        
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        }
        else
        {
        for(int k=2*i-1;k<=n;k--)
        {
            cout<<"*";
        }
        
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}