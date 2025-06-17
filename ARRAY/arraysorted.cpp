#include<iostream>
using namespace std;

int main()
{
    int n,flag;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Not sorted"<<endl;
    }
}