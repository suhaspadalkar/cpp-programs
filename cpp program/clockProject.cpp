#include<iostream>
using namespace std;
#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000;//we add a delay of 1000 miliseconds and we will use it in the function sleep
    // printf("Set Time :\n");
    cout<<"Set Time :"<<endl;
    // scanf("%d%d%d",&h,&m,&s);
    cin>>h>>m>>s;
    if(h>12 || m>60 || s>60)
    {
        // printf("ERROR ! \n");
        cout<<"ERROR !"<<endl;
        exit(0);
    }
    while(1)//this is an infiniteloop and anything inside will repeat itself to infinity
    {
        s++;
        if(s>59)
        {
            m++;
            s=00;
        }
        if (m>59)
        {
            h++;
            m=00;
        }
        if (h>59)
        {
            h=01;
        }
        // printf("\n Clock : ");
        cout<<endl<<"Clock";
        // printf("\n %02d:%02d:%02d",h,m,s);
        cout<<endl<<h<<":"<<m<<":"<<s;// this writes our time in 00:00:00
        Sleep(d);// the function sleep slows down the while loop and make it more like real clock
        system("cls");//this clear this screen
    }
}