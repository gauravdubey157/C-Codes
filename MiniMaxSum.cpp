#include<iostream>
using namespace std;

int main()
{
 int temp;
 int arr[5];
 for(int i=0;i<5;i++)
 {
    cin>>arr[i];
 }
 for(int i=0;i<4;i++)
 {
    for(int j=i+1;j<5;j++)
    {
       if(arr[j]<arr[i])
       {temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;}
    }
 }
  int max=0, min=0;
 for(int i=0;i<4;i++)
 {

 max=max+arr[i];
 }
 for(int j=1;j<5;j++)
 {
    
     min=min+arr[j];
 }
 cout<<max<<" "<<min;
 return 0;
}