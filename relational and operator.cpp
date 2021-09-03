#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5;
    cout<<"Enter Number 1:"<<endl;
    cin>>num1;
    cout<<"Enter Number 2:"<<endl;
    cin>>num2;
    cout<<"Enter Number 3:"<<endl;
    cin>>num3;
    cout<<"Enter Number 4:"<<endl;
    cin>>num4;
    cout<<"Enter Number 5:"<<endl;
    cin>>num5;
    if(num1>num2 && num1>num3 && num1>num4 && num1>num5)
    {
        cout<<"Number 1 is greatest:";
    }

    else if(num2>num3 && num2>num4 && num2>num5)
    {
        cout<<"Number 2 is greatest:";
    }
    else if(num3>num5 && num4>num5)
    {
        cout<<"Number 3 is greatest";
    }
    else if(num4>num5)
    {
        cout<<"Number 4 is greatest";
    }
    else
    {
        cout<<"Number 5 is greatest";
    }

}
