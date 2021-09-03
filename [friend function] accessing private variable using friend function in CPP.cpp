#include<iostream>
using namespace std;

class arpudha
{
private:
        int a=10;
public:
    addi();
    friend int display(arpudha);
};
int display(arpudha display)
{
        display.a;
        return display.a;
    }
int main()
{
    arpudha A;


    cout<<"private varaible a :"<<display(A);
}

