#include<iostream>
using namespace std;
class opera
{
    public:
    int a=10,b=20;
    add(int a,int b)
    {
        int c=a+b;
        cout<<"The Addition of num1 and num2:"<<c;
        return c;
    }
    sub(int a,int b)
    {
        int c=a-b;
        cout<<"The Subtraction of num1 and num2:"<<c;
        return c;
    }
    mul(int a,int b)
    {
        int c=a*b;
        cout<<"The Multiplication of num1 and num2:"<<c;
        return c;
    }
    div(int a,int b)
    {
        float c=a/b;
        cout<<"The Division of num1 and num2:"<<c;
        return c;
    }
    mod(int a,int b)
    {

        float c=a%b;
        cout<<"The Modulos of num1 and num2:"<<c;
        return c;

    }
};
int main()
{
    opera value;
    int n;
    int num1, num2;
    cout<<"\n Enter 1 for Addition \n Enter 2 for Subtraction";
    cout<<"\n Enter 3 for multiplication \n Enter 4 for Division";
    cout<<"\n Enter 5 for Modulos \n";
    cin>>n;
    cout<<"\n Enter Number 1:";
    cin>>num1;
    cout<<"Enter Number 2:";
    cin>>num2;
    switch(n)
    {
    case 1:
        {
            value.add(num1,num2);
            break;
        }
    case 2:
        {
            value.sub(num1,num2);
            break;
        }
    case 3:
        {
            value.mul(num1,num2);
            break;
        }
    case 4:
        {
            value.div(num1,num2);
            break;
        }
    case 5:
        {
            value.mod(num1,num2);
            break;
        }
    default:
        {


        cout<<"Oops! Invalid Entry Try again!";
        }
    }

}
