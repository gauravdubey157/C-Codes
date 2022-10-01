#include<iostream>
#include<math.h>
using namespace std;

/*int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==0&&y1==0&&x2==1&&y2==0)
    {
        cout<<"0111"
    }
    else if(x1==0&&y1==0&&x2==0&&y2==1)
    {
        cout<<"1011"
    }
    else if(x1==0&&y1==0&&x2==1&&y2==1)
    {
        cout<<"0110"
    }
    if(x1==0&&y1==0&&x2==1&&y2==0)
    {
        cout<<"0111"
    }
    else if(x1==0&&y1==0&&x2==0&&y2==1)
    {
        cout<<"1011"
    }
    else if(x1==0&&y1==0&&x2==1&&y2==1)
    {
        cout<<"0110"
    }
    */
int main()
{
    int x1,y1,x2,y2,x3,x4,y3,y4,d;
    cin>>x1>>y1>>x2>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    x3=x2+d;
    y3=y2+d;
    x4=x1+d;
    y4=y1+d;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    return 0;
}