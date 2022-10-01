//Parallelopiped

#include<iostream>
using namespace std;

int main()
{
    int x,y,z,sum=10000;
    cin>>x>>y>>z;
    for(int i=1;i<=100;i++)
    {
    for(int j=1;j<=100;j++)
    {
    for(int k=1;k<=100;k++)
    {
      if(i*j+j*k+k*i==x+y+z)
      {
        if(sum>(i+j+k))
          sum=(i+j+k);
      }
    }
    }
    }
    cout<<4*sum;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,s1,s2,s3;
    cin>>s1>>s2>>s3;
        a=sqrt(s1*s3/s2);
        b=sqrt(s1*s2/s3);
        c=sqrt(s2*s3/s1);
        cout<<4*(a+b+c);
        return 0;
}
*/

