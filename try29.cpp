#include<bits/stdc++.h>
using namespace std;
  void removethespaces(char input[])
{

    int k=0;
    int len=strlen(input);
    char temp[len+1];
    int i=0;
  while(i<len)
   {
       if( i+1<len && input[i]=='W' && input[i+1]=='U' && input[i+2]=='B' )
       {
          i=i+3;
       }

       else
       {


           while(i<len    && input[i+1]!='U'  && input[i+2]!='B'  )
           {
                temp[k]=input[i];
                k++;
                i++;
           }


        temp[k]=' ';
        k++;

        }



   }


   temp[k]='\0';
   int len2=strlen(temp);
   len=len2;
   for(int i=0;i<len;i++)
   {
       input[i]=temp[i];
   }
   input[len]='\0';

}
#include<iostream>
using namespace std;
int main()
    {
         char str[200];
    cin>>str;
   removethespaces(str);
   cout<<str;
    }
