#include<iostream>
using namespace std;

class loop
{
public:
    forloop(int num)
    {
        int sum=0;

        for(int i=0;i<=num;i++)
        {
            sum=sum+i;
            cout<<"\n"<<sum;

        }
    }
};
int main()
{
    loop display;
    int n;
    cout<<"Enter the n value to sum";
    cin>>n;
    display.forloop(n);


}
