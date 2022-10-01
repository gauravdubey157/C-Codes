#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int odd,even,n,k;
    cin>>n>>k;
    odd=(n+1)/2;
    even=n/2;
    if(k<=odd)
    {
        cout<<2*k-1;
    }
    else if(k>=n/2)
    {
        cout<<2*(k-odd);
    }
    return 0;
}