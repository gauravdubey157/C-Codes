#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,m,a,b,s=INT_MAX;
    cin>>n>>m>>a>>b;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            if(m*i+1*j>=n)
            {
                if((b*i+a*j)<s)
                s=b*i+a*j;
            }
        }
    }
cout<<s;
return 0;
}


/*if(a+b+c==n)
    {
        cout<<"3";
    }
    else if(a+b==n)
    {cout<<"2";}
    else if(a+c==n)
    {cout<<"2";}
    else if(b+c==n)
    {cout<<"2";}
    else if(a==n ||b==n ||c==n)
    {cout<<"1";}
    */