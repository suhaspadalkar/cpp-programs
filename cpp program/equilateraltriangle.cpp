//formula for equilateral triangle a=b=c//a==b&&b==c

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three sides of triangle  ";
    cin>>a>>b>>c;
    if(a==b&&b==c){
    cout<<"triangle is equilateral";
    }
    else
    cout<<"traingle is not equilateral";
    return 0;

}