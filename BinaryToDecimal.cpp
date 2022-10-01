#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r=0,b=0,c=0;
    cin>>n;
    while(n!=0)
    {
    r=n%10;
    n=n/10;
    b=b+r*pow(2,c);
    c++;
    }
    cout<<b;
}