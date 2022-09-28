#include<iostream>
using namespace std;
int main()
{
    int n1,d,n,rev=0;
     cout<<"enter no";
      cin>>n;
      while(n>0)
      {
          d=n%10;
          rev=rev*10+d;
          n=n/10;
      }
         if(rev==n1)
         cout<<n1<<"   is palindrome";
         else
         cout<<n<<"  is not Palindrome";
         return 0;
}