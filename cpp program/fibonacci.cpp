#include<iostream>
using namespace std;
int main()
{
    int a=1,b=0,c;
    for( int i=1;i<=10;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    return 0;
}