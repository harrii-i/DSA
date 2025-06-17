/*ROTATING K ELEMENTS FROM LAST*/
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void reverse(int arr[],int l,int r)
{
    if(l>=r)
    return;
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}

int main()
{
    int n,arr[10],k;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the rotation"<<endl;
    cin>>k;
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}