#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2==0 && a!=0)
        cout<<"Even";
        else if(a%2!=0)
            cout<<"Odd";
    else
        cout<<"Zero";
}
