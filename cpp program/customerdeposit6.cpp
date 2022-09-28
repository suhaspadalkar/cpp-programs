/* to read information costumer ID , costumer Name, account balance 
write code to deposite amount , withraw amount , net balance
*/ 


#include <iostream>
using namespace std;
int main()
{
    int cid,acbal,depamt,wdamt,netbal;
    char name[20];
    cout<<"enter the name of customer  =  ";
    cin>>name;
    cout<<" enter Customer ID  =";
    cin>>cid;
    cout<<" enter Account Balance = ";
    cin>>acbal;
    cout<<"enter the deposited amt =";
    cin>>depamt;

    netbal=depamt+acbal;
    cout<<"diposited amount="<<depamt<<endl;
    netbal=depamt+acbal;
    cout<<"the Total balance="<<netbal<<endl;
    cout<<"enter withdrawl amount=";
    cin>>wdamt;
    netbal=netbal-wdamt;
    cout<<"total balance ="<<netbal;
    return 0;


}