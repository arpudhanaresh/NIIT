#include<iostream>
using namespace std;
int main()
{
    int val[100],n,m;
    cout<<"Enter how many numbers to be stored: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter number "<<i<<":";
        cin>>val[i];
    }
    cout<<"\n Enter which number to be Displayed:";
    cin>>m;
    cout<<val[m];
}
