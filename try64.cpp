#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int a=0,b=0,c=0,d=0,p,q,r,s,min;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='n')
        a++;
        else if(str[i]=='i')
        b++;
        else if(str[i]=='e')
        c++;
        else if(str[i]=='t')
        d++; 
    }
    p=a/3;
    q=b;
    r=c/3;
    s=d;
    if(a+b+c+d==str.size()-2)
    {
        cout<<"2";
        return 0;
    }
    min=p;
    if(q<min)
    min=q;
    if(r<min)
    min=r;
    if(s<min)
    min=s;

    cout<<min;
}  