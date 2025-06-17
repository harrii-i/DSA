#include<iostream>

using namespace std;

int main()
{
    int n,a[10];

    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            a[i]=a[j];
            i++;
        }
    }

    while(i<n)
    {
        a[i]=0;
        i++;
    }

    cout<<"After moving zeroes to end"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}