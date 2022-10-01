#include<iostream>
using namespace std;

int main()
{
    int n,arr[n],key;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"searching element"<<endl;
    cin>>key;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==key)
            cout<<j;
        else
            cout<<"no match";
    }
    return 0;
}
