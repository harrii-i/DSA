#include<iostream>

using namespace std;

int main()
{
    int arr[10],n;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    cout<<"The array after reversing"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}