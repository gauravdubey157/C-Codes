#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter element";
   cin>>n;
   for(int i=2;i<n;i++)
   {
    if(n%i==0)
    {
        cout<<"not a prime no.";
        break;
    }
    else
    {
        cout<<"prime no.";
        break;
    }
    
   }
}