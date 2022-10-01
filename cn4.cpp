#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,r=0,i=0,b=0;
    cin>>n;
    while(n!=0)
    {
        
        r=n%2;
        n=n/2;
        b=b+r*pow(10,i);
        i++;
    }
    cout<<b;
}