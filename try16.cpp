#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, lower, upper,count=0;
    cin>>n;
    int arr[2*n];
    for(int i=1;i<=2*n;i++)
    {
      cin>>arr[i];
    }

    for(int i=1;i<=2*n;i++)
    {
       if(i%2==0)
       {
         lower=+arr[i];
       }
       else
       {
           upper=+arr[i];
       }
    }

    if(upper%2!=0 && lower%2!=0)
    {
        for(int i=1;i<=2*n;i++)
      {
        if(arr[2*i-1]%2!=0)
        {
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            count++;
         for(int j=1;j<=2*n;j++)
      {
       if(j%2==0)
       {
         lower=+arr[j];
       }
       else
       {
           upper=+arr[j];
       }
      }
        }

    }
    }
    else
    {
        cout<<"0";
    }
    {cout<<count;}
    return 0;
}

