#include<iostream>
using namespace std;
 
int main()
{
    int n,count1=1,count2=0;
    cin>>n;
    string arr[n],t1,t2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
          if(arr[0]==arr[i])
          {
            count1++;
            t1=arr[0];
          }
          else
          {
              count2++;
              t2=arr[i];
          }
    }
   
   if(n==1)
   {
     cout<<arr[0];
   }
   else if(count1>count2)
   {
       cout<<t1;
   }
   else
   {
       cout<<t2;
   }
   
    return 0;
}