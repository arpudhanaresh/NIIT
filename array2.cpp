#include<iostream>
using namespace std;
int main()
{
    int num[10];
    for(int i=0;i<=4;i++)
        {
        cout<<"Enter number ";
        cout<<i+1<<":";
        cin>>num[i];
        }
    if(num[0]>num[1] && num[0]>num[2] && num[0]>num[3] && num[0]>num[4])
    {
        cout<<"Number 1 is greatest:";
    }

    else if(num[1]>num[2] && num[1]>num[3] && num[1]>num[4])
    {
        cout<<"Number 2 is greatest:";
    }
    else if(num[2]>num[4] && num[3]>num[4])
    {
        cout<<"Number 3 is greatest";
    }
    else if(num[3]>num[4])
    {
        cout<<"Number 4 is greatest";
    }
    else
    {
        cout<<"Number 5 is greatest";
    }

}
