#include<iostream>
using namespace std;
class opr
{
    private:
            int a,b,c;
    public:
            void get(int,int);  //member fun
            void disp();
};
            void opr:: get(int x,int y)   //:: scope resolution
            {
                 a=x;
                 b=y;
            }
            void opr::disp()
            {
                c=a+b;
                cout<<"add="<<c<<endl;
            }

int main()
{
    opr o;
    o.get(121,233);
    o.disp();
    return 0;
}