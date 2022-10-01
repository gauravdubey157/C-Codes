#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a!=b)     //this means that there will be a set of a<b and a>b which will lead to happy alex output
        {
           cout<<"Happy Alex";
           return 0;
        }
    }
            cout<<"Poor Alex";
            return 0;
}