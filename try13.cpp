#include<iostream>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(n>3)
    {
    for(int i=1;i<=n-3;i++)
    {
        sum1=+arr[3*i+1];
    
        sum2=+arr[3*i+2];
   
        sum3=+arr[3*i+3];
    }
    }
    else if(n==3)
    {
        sum1=arr[1];
    
        sum2=arr[2];
   
        sum3=arr[3];
    }
    else if(n==2)
    {
      sum1=arr[1];
    
      sum2=arr[2];  

      sum3=0;
    }
    if(sum1>sum2 && sum1>sum3)
    {
        cout<<"chest";
    }
    else if(sum2>sum3 && sum2>sum1)
    {
        cout<<"biceps";
    }
    else if(sum3>sum1 && sum3>sum2)
    {
        cout<<"back";
    }
    return 0;
}


/*#include<iostream>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[n];
    }
    for(int i=1;i<=n;i++)
    {
    if(i%3==0)
    {
        sum1=+arr[i];
    }
    else if(i%2==0)
    {
        sum2=+arr[i];
    }
    else
    {
        sum3=+arr[i];
    }
    }
    if(sum1>sum2 && sum1>sum3)
    {
        cout<<"chest";
    }
    else if(sum2>sum3 && sum2>sum1)
    {
        cout<<"back";
    }
    else if(sum3>sum1 && sum3>sum2)
    {
        cout<<"biceps";
    }
    return 0;
}
*/