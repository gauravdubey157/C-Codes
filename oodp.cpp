#include<iostream>
using namespace std;

int main() 
{
    int b,t=0;
    char c;
    cin>>b;
    cin>>c;
    t=b+0.2*b+0.5*b-0.11*b;
    if('c'=='A')
    {
        cout<<t+1700;
    }
    else if('c'=='B')
    {
        cout<<t+1500;
    }
    else
    {
        cout<<t+1300;
    }
    return 0;
}
