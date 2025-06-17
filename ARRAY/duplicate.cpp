#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    for(int j=1;j<n;j++)
    {
        if(a[j]!=a[i])
        {
            a[i+1]=a[j];
            i++;
        }
    }
    int k=i+1;
    for(i=0;i<k;i++)
    {
        cout<<a[i];
    }
    // cout<<i+1;
}
