#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int c=a+b;
    cout<<a<<b<<c;
    for(int i=4;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        cout<<c;
    }
    return 0;
}
        