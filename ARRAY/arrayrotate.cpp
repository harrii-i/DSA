#include<iostream>

using namespace std;

void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main()
{
    int n,r;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number of places to rotate"<<endl;
    cin>>r;

    reverse(arr,r);
    reverse(arr+r,n-r);
    reverse(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}