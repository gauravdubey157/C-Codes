#include<iostream>
using namespace std;

int main()
{
    int n,c1=0,c2=0,s1,s2;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
     {
         cin>>arr[i];
     }
     for(int i=1;i<=n;i++)
     {
        if(arr[i]%2==0)
        {
            c1++;
            s1=i;
        }
        else
        {
            c2++;
            s2=i;
        }   
     }

if(c2==1)
{
    cout<<s2;
}
else if(c1==1)
{
    cout<<s1;
}
return 0;
}