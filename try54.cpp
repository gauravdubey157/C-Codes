#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b,c,s=0;
    cin>>n>>a>>b>>c;                     
    for(int i=1;i<=4000;i++)
    {
        for(int j=1;j<=4000;j++)
        {
                    if(s<(i+j+(n-a*i-b*j)/c))
                    {
                        s=i+j+(n-a*i-b*j)/c;
                    }
        }
    }
    cout<<s;
    return 0;
}