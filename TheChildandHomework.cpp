#include<iostream>
using namespace std;

int main()
{
    int c=0,p1,p2,p3,p4;
    char g;
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    p1=s1.size()-2;
    p2=s2.size()-2;
    p3=s3.size()-2;
    p4=s4.size()-2;
    if(p1>=2*p2 and p1>=2*p3 and p1>=2*p4 || 2*p1<=p2 and 2*p1<=p3 and 2*p1<=p4)
    {
       c++;
       g='A';
    }
    if(p2>=2*p1 and p2>=2*p3 and p2>=2*p4 || 2*p2<=p1 and 2*p2<=p3 and 2*p2<=p4)
    {
       c++;
       g='B';
    }
    if(p3>=2*p2 and p3>=2*p1 and p3>=2*p4 || 2*p3<=p2 and 2*p3<=p1 and 2*p3<=p4)
    {
       c++;
       g='C';
    }
    if(p4>=2*p2 and p4>=2*p3 and p4>=2*p1 || 2*p4<=p2 and 2*p4<=p3 and 2*p4<=p1)
    {
       c++;
       g='D';
    }
    if(c==1)
    {
        cout<<g;
    }
    else
    {
        cout<<'C';
    }
    
    return 0;
}