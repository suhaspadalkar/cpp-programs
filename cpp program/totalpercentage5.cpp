/* calculate total percentage of three suject*/


#include <iostream>
using namespace std;
int main()
{
    int rno,m1,m2,m3,total;
    float per;
    char name[20];
    cout<<"enter the Name, roll no.,marks of three subject=";
    cin>>name>>rno>>m1>>m2>>m3;
    total=m1+m2+m3;
    per=total/3;
    cout<<"total ="<<total<<endl<<"percentage="<<per;
    return 0;




}