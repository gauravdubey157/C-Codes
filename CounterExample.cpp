#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,r,a,b,c;
    cin>>l>>r;
    for(a=l;a<r;a++)
    {
        for(c=r;c>a;c--)
        {
            if(__gcd(a,c)!=1)
            {
                for(b=a+1;b<c;b++)
                {
                    if(__gcd(a,b)==1 && __gcd(b,c)==1 && a<b<c)
                    {
                        cout<<a<<" "<<b<<" "<<c;
                        return 0;
                    }
                }
            }
        }
    }
        cout<<"-1";
    return 0;
}