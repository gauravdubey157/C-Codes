#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,count=1;
    cin>>r>>c;
while(r!=1&&c!=1)
{
  r--;
  c--;
  count++;
}
   if(count%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    return 0;
}
