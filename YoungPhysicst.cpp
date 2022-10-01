#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,s1=0,s2=0,s3=0,i,j,k;
    cin>>n;
    //int arr[n];
    for(int m=0;m<n;m++)
    {
        cin>>i>>j>>k;
        s1+=i;
        s2+=j;
        s3+=k;
    }
    if(s1==0&&s2==0&&s3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}