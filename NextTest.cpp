#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]>1)
    {
        cout<<"1";
    return 0;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>1)
        {
            cout<<a[i]+1;
            return 0;
        }
    }
    cout<<a[n-1]+1;
    return 0;
}