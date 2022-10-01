//ODD EVEN

#include<iostream>
using namespace std;

int main()
{
    long long n,s;
    cin>>n>>s;
    long long arr[n];
    if(n%2==0)
    {
        for(long long i=1;i<=n/2;i++)
    {
        arr[i]=2*i-1;
        arr[i+n/2]=2*i;
    }
    }
    else
    {
          for(long long i=1;i<=(n+1)/2;i++)
    {
        arr[i]=2*i-1;
        if(i!=(n+1)/2)
        {arr[i+(n+1)/2]=2*i;}
    }
    }
    cout<<arr[s];
    return 0;
}

/*
int main()
{

    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}
*/