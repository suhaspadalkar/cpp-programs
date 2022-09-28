#include <iostream>
using namespace std;
int main()
{
    float salary, hra, da, netsalary;
    cout << "enter The salary ";
    cin >> salary;
    if (salary < 10000)
    {
        hra = salary * (0.2);
        da = salary * (0.8);
    }
    else if (salary < 20000)
    {
        hra = salary * (0.25);
        da = salary * (0.85);
    }
    else
    {
        hra = salary * (0.3);
        da = salary * (0.9);
    }
    netsalary=salary+hra+da;
    cout<<" The Net Salary = "<<netsalary;
    return 0;
}