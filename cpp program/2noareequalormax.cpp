#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two no.";
    cin>>a>>b;
    if(a==b)
    cout<<"both Numbers are equal";
    else
    if(a>b)
    cout<<a<<" is max";
    else 
    cout<<b<<"is max";
    return 0;
    
}