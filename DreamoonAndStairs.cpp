#include<iostream>

using namespace std;

int main()
{
    int n,m,count=0,s=10000;
    cin>>n>>m;
    for(int i=0;i<10000;i++)
    {
        for(int j=0;j<10000;j++)
        {
            if((2*i+1*j)==n && (i+j)%m==0)
            {
                if(i+j<s)
                s=i+j;
            }
        }
    }
    if(s==10000)
    {
        cout<<"-1";
        
    }
    else
    {
        cout<<s;
    }
    return 0;
}

