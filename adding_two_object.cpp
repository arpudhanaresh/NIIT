#include<iostream>
using namespace std;
class mynum
{
private:
    int number;
public:
    mynum()
    {
        number=0;
    }
    mynum(int n1)
    {
        number=n1;
    }
    mynum operator +(mynum N)
    {
        mynum temp;
        temp.number=number+N.number;
        return temp;
    }
    void display()
    {
        cout<<number<<endl;
    }
};

int main()
{
    mynum num1(100);
    mynum num2(50);
    mynum num3;
    num3= num1+num2;
    num1.display();
    num2.display();
    num3.display();
    return 0;
}
