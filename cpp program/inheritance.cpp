#include <iostream>
#include <String.h>
using namespace std;
class student{
    int sid,m1,m2;
    char name[10];
    public:
    void getdata(int id,char*nm,int n1,int n2)
    {
        sid=id;
        strcpy(name,nm);
        m1=n1;
        m2=n2;
    }
    void putdata()
    {
        cout<<"student id="<<sid<<endl<<"name="<<name<<endl;
    }
    void calculate();
};
 void student:: calculate()
{
    float per=(m1+m2)/2;
    cout<<"percentage="<<per;
}
int main()
{
    student s;
    int id,n1,n2;
    char nm[10];
    cout<<"enter id ,name,marks of two sub";
    cin>>id>>nm>>n1>>n2;
    s.getdata(id,nm,n1,n2);
     s.putdata();

    s.calculate();
    return 0;
}