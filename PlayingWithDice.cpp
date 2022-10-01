#include<iostream>
using namespace std;

int main()
{
    int a,b,sum1=0,sum2=0,count1=0,count2=0,count3=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(a>=i)
        {
            sum1=a-i;
        }
        else if(a<i)
        {
            sum1=i-a;
        }
        if(b>=i)
        {
            sum2=b-i;
        }
        else if(b<i)
        {
            sum2=i-b;
        }
        if(sum1<sum2)
        {
            count1++;
        }
        else if(sum1>sum2)
        {
            count2++;
        }
        else if(sum1==sum2)
        {
            count3++;
        }
    }
cout<<count1<<" "<<count3<<" "<<count2;
return 0;
    }
