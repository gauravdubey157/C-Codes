#include<iostream>
#include<algorithm>
using namespace std;

void intersection(int input1[], int input2[], int s1, int s2)
{
   if(s1<s2)
   {
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            if(input1[i]==input2[j])
            {cout<<input1[i]<<" ";
            break;}
        }
    }
   }
   else
   {
       for(int i=0;i<s2;i++)
    {
        for(int j=0;j<s1;j++)
        {
            if(input2[i]==input1[j])
            {cout<<input2[i]<<" ";
            break;}
        }
    }
   }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size1, size2;
        cin>>size1;

        int *input1=new int[size1];
        for(int i=0;i<size1;i++)
        {
            cin>>input1[i];
        }

        cin>>size2;

        int *input2=new int[size2];

        for(int i=0;i<size2;i++)
        {
            cin>>input2[i];
        }
        intersection(input1, input2, size1, size2);

        delete[] input1;
        delete[] input2;
        cout<<endl;
    }
}