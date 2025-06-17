#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,temp;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

}