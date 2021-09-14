#include<iostream>
using namespace std;
class calc
{
private:
    int a,b,c;
public:
    calc()
    {
         a=0, b=0, c=0;
    }
    calc(int x, int y, int z)
    {
         a=x;
        b=y;
         c=z;
    }
    int add(int a, int b)
    {

        c=a+b;
        return c;
    }
    int sub(int a, int b)
    {
         c=a-b;
        return c;
    }
     int mul(int a, int b)
    {
         c=a*b;
        return c;
    }
     int div (int a, int b)
    {
         c=a/b;
        return c;
    }
    ~calc()
    {
         a=0,b=0,c=0;
    }
};

int main()
{
    calc cal;
    calc cal1(0,0,0);
    int a,b,n;
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter the number 2:";
    cin>>b;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        {
            cout<<"The addition of number 1 and number 2:"<<cal.add(a,b)<<endl;
            break;
        }
    case 2:
         {
            cout<<"The subtraction of number 1 and number 2:"<<cal.sub(a,b)<<endl;
            break;
        }
    case 3:
         {
            cout<<"The multiplication of number 1 and number 2:"<<cal.mul(a,b)<<endl;
            break;
        }
    case 4:
         {
            cout<<"The division  of number 1 and number 2:"<<cal.div(a,b)<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid Entry";
        }
    }
}
