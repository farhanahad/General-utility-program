#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)//The first 5 perfect numbers are 6, 28, 496, 8128, and 33550336.

            sum=sum+i;
            i++;

    }
    if(sum==n)
        cout<<n<<" "<<"is a perfect number";
    else
        cout<<n<<" "<<"is not a perfect number";

}
