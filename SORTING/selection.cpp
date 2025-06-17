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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

}