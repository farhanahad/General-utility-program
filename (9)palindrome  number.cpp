#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    cout<<"Enter the string to check if it is a palindrome: ";
    cin>>a;
    strcpy(a,b);
    strrev(b);
    if(strcmp(a,b)==0)
        cout<<"Entered string is a palindrome\n";
    else
        cout<<"Entered string is not a palindrome";
}
