#include <iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c>0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

