#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three numbers    ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a << " is maximum number"<<endl;
        else
            cout << c << "  is maximum number";
    }
    else
    {
        if (b > c)
            cout << b << "  is maximum number"<<endl;
        else
            cout << c << "  is maximum number";
    }
    if (a < b)
    {
        if (a < c)
            cout << a << "  is minimum number"<<endl;
        else
            cout << c << "  is miniimum number";
    } 
    else
    {
        if (b < c)
            cout << b << "   is minimum number"<<endl;
        else
            cout << c << "  is minimum number";
    }
    return 0;
}