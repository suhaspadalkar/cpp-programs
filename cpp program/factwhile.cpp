#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,no;
    cout<<"enter the no. = ";
    cin>>no;
    i=no;
    while(i>=1)
    {
       fact=fact*i;
       i--;
    }
    cout<<"factorial= "<<fact;

}