#include<iostream>
using namespace std;
int main()
{
    long int n,a,b,c,s=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            for(int k=0;k<=4000;k++)
            {
                if((a*i+b*j+c*k)==n)
                {
                    if(s<(i+j+k))
                    {
                        s=i+j+k;
                    }
                }
            }
        }
    }
    cout<<s;
    return 0;
}