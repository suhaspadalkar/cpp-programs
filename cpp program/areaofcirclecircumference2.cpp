#include <iostream>
using namespace std;
//area of circle and cicumference
int main()
{
    int r;
    float area,circumf;
    cout<<"enter the radius of circle";
    cin>>r;
    area=3.14*r*r;
    circumf=2*3.14*r;
    cout<<"Area of cicle ="<<area<<endl;
    cout<<"Area of Circumference of circle ="<<circumf;

    return 0;
}