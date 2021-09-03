#include<iostream>
using namespace std;

class loop
{
public:
    whileloop(int num)
    {
        int sum=0,i=1;

        while(i<=num)
        {
            sum=sum+i;
            cout<<"\n"<<sum;
            i++;

        }
    }
};
int main()
{
    loop display;
    int n;
    cout<<"Enter the n value to sum";
    cin>>n;
    display.whileloop(n);


}
