#include<iostream>
using namespace std;
int main()
{
    int  n,d,n1,sum=0;
    cout<<"enter the number";
    cin>>n;
    n1=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if (sum==n1)
         cout<<n1<<"is armstrong";
         else
         cout<<n1<<"is not armstrong";
         return 0;


}