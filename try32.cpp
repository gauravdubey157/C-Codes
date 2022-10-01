#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,a;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2)
    {
      a=y2-y1;
      cout<<x1+a<<" "<<y1<<" "<<x1+a<<" "<<y1+a;
    }
    else
    {
           if(x2==-x1 && y2==-y1)
    {
         cout<<x1<<" "<<-y1<<" "<<x2<<" "<<-y2;
    }
     else if(x2==x1 && y2==-y1)
    {
         cout<<-x1<<" "<<y1<<" "<<-x2<<" "<<y2;
    } 
        else if(y2==y1)
        {
            a=x2-x1;
            cout<<x1<<" "<<y1+a<<" "<<x1+a<<" "<<y1+a;
        }
        else if(x2-x1==y2-y1)
        {
            a=y2-y1;
            cout<<x1<<" "<<y1+a<<" "<<x1+a<<" "<<y1;
        }
        else
        {
            cout<<"-1";
        }
    } 
    return 0;
    }