  /* Simple Interest
    si=(p*n*r)/100
    p=principle amount
    n= duration
    r=rate of interest*/

#include <iostream>
using namespace std;
int main()
{
    int p,n;
    float r;
    cout<<"enter the amount"<<endl<<"enter the duration  "<<endl<<"enter the rate of interest  "<<endl;
    cin>>p>>n>>r;
    float si;
    si=(p*n*r)/100;
    cout<<"The Simple Interest="<<si;
    return 0;
}
