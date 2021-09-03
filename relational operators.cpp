#include<iostream>
using namespace std;
class relational
{
public:
    check(int a,int b)
    {
        if(a>b)
        {
            cout<<"Number 1 is greater then number 2";
        }

        else if(a<b)
        {
            cout<<"Number 2 is greater than Number 1";
        }
        else if(a==b)
        {
            cout<<"Both number 1 and Number 2 are equal";
        }
        else
        {
            cout<<"UNKNOW ERROR";
        }
    }

};
int main()
{
    relational value;
    int num1 , num2;
    cout<<"Enter Number 1:";
    cin>>num1;
    cout<<"Enter Number 2:";
    cin>>num2;
    value.check(num1 , num2);
    return 0;
}
