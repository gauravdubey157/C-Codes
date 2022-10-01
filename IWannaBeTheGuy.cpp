#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,p,q,count=0;
    cin>>n;
    cin>>p;
    int arr1[p];
    for(int i=0;i<p;i++)
    {
      cin>>arr1[i];
    }
    cin>>q;
    int arr2[q];
    for(int i=0;i<q;i++)
    {
      cin>>arr2[i];
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }
    if((p+q-count)==n)
    {
     cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
   return 0;
}