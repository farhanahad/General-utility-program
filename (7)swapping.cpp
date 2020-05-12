#include<iostream>
using namespace std;
int main()
{
    int x,y,temp;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Before swapping x="<<x<<" y="<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping x="<<x<<" y="<<y;
}
