#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of n numbers is: "<<sum;
    return 0;
}
