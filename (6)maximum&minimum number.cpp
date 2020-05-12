#include<iostream>
using namespace std;
int main()
{
    int arr[1000],i,max,min,size;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the elements:";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];

    }
    cout<<"Maximum NUMBER:"<<max<<endl;
    cout<<"Minimum Number:"<<min<<endl;
}
