/*to convert temp degree celcious to degree farenheit
formula = F(9/5*c)+32
*/
#include <iostream>
using namespace std;
int main()
{
    float dc,df;
    cout<<"Enter the tempe in degree celcious =";
    cin>>dc;
    df=(9/5*dc)+32;
    cout<<"temp in degree farenheit is ="<<df;
    return 0;

}