#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,r=1;
    cin>>n>>m;
       int i=0;
       while(i<=32)    //bcoz 2^32 and 2 is the smallest of all
        {  
           r=r*n;
           i++;
           if(r==m)
           { 
               cout<<"YES"<<endl<<i-1;
               return 0;
           }
       }
        cout<<"NO";
        return 0;
}    

