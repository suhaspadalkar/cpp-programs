//area of traingle area of rectangle and circle ,disp 1st options and then read value and calculate

#include<iostream>
using namespace std;
int main()
{
    int r,l,b,h,no;
    cout<<"1.Area of cicle"<<endl<<"2.area of reactangle"<<endl<<"3.Area of triangle"<<endl<<"4.exit"<<endl<<endl<<"Enter what you want to calculate";
    cin>>no;
switch (no)
{
    case 1:
      cout<<"enter the radius of circle";
      cin>>r;
      cout<<"Area of circle = "<<(3.14*r*r);
      break;
      case 2:
      cout<<"enter the length and bridth ";
      cin>>l>>b;
      cout<<"Area of Reactangle = "<<(l*b);
      break;
      case 3:
      cout<<"enter the length, width,height";
      cin>>l>>b>>h;
      cout<<"Area of triangle ="<<(l*b*h);
      break;
      case 4:
      exit(0);
      default:
      cout<<"enter the no between 1 to 4";

}
return 0;
}