#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,c,m[10],sum=0;
    float p1,p2,p3,p4,p5,p6,p7;
    cin>>n>>a>>b>>c;
 
        p1=3*(n/(a+b+c));
        p2=2*(n/(a+b));
        p3=2*(n/(a+c));
        p4=2*(n/(b+c));
        p5=1*(n/(a));
        p6=1*(n/(b));
        p7=1*(n/(c));
    
    for(int i=0;i<7;i++)
    {
        if(sum <= m[i] && abs(sum-m[i])>1)
        {
            sum=m[i];
        }
    }
    cout<<sum;
    return 0;
}