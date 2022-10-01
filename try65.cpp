#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int x1,x2,y1,y2,s;
    cin>>x1>>y1>>x2>>y2;
    if(x1==y1)
    {
      if(x1==x2)
      {
          s=abs(y1-y2);
          if(y1<y2)
          cout<<x1+s<<" "<<x1<<" "<<x1+s<<" "<<x1+s;
          else
          cout<<x1<<" "<<x1+s<<" "<<x1<<" "<<x1;
      }
      else
      {
          if(y1==y2)
          {
             s=abs(x2-x1);
             cout<<x1<<" "<<x1+s<<" "<<x1+s<<" "<<x1+s;
          }
          else
          {
             s=abs(y2-y1);
             cout<<x1<<" "<<x1+s<<" "<<x1+s<<" "<<x1;
          }
      }
    }
    else
    {
        if(x1==x2)
        {
            s=abs(y1-y2);
            if(y1>y2)
            cout<<x1+s<<" "<<x1+s<<" "<<x1+s<<" "<<x1;
            else
            cout<<x1<<" "<<x1<<x1<<" "<<x1+s;
        }
        else
        {
            s=abs(x1-x2);
            cout<<x1<<" "<<x1<<" "<<x1+s<<" "<<x1+s;
        }
    }
    return 0;
}