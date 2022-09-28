#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter The character ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            cout<< "character is voel";
        }
        else{
            cout<<"character is consonant";
        }
       return 0;
}