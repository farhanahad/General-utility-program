#include<iostream>
using namespace std;
int main()
{
    int num,j=2,ch=0;
    cout<"Enter any n umber:";
    cin>>num;
        if(num<=1)
ch=1;
    while(j<=num/2)
    {
        if(num%j==0)
        {
            ch=1;
            break;
        }
        else
            {j++;}
    }
    if(ch==0)
        cout<<num<<" is a prime number";
    else
         cout<<num<<" is not a prime number";
}
