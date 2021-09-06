#include<iostream>
using namespace std;
int x =500;
int main()
{
    static int x=10;
    cout<<x<<endl;
    x=x+10;
    cout<<x<<endl;
    cout<<::x<<endl;

}
