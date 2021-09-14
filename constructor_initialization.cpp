#include<iostream>
using namespace std;
class arpudha
{
public:
    arpudha()
    {
        int a=0,b=0,c=0;
    }
    int add(int a, int b)
    {
        int c=a+b;
        return c;
    }
    ~arpudha()
    {
        int a=0,b=0,c=0;
    }
};
int main()

{
    arpudha obj;
    cout<<"addition of A and B : "<<obj.add(5,8);

}
