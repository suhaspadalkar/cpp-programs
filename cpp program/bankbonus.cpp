#include <iostream>
using namespace std;
int main()
{
    float bonus, balance, Netbalance;
    char gender;
    cout << "enter the gender ";
    cin >> gender;
    cout << "enter The Account Balance= ";
    cin >> balance;
    if (gender == 'f' || gender == 'F')
    {
        if (balance > 10000)
            bonus = balance * 0.5;
        else
            bonus = balance * 0.2;
        }
        else {
            bonus = balance * 0.2;
        }
        Netbalance = balance + bonus;
        cout << "netbalance= " << Netbalance;
        return 0;
    }