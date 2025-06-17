/*REVERSING AN ARRAY*/
#include<iostream>
using namespace std;
int arr[20];
int n;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void reverse(int l)
{
    if(l>=n/2)
    return;
    swap(arr[l],arr[n-l-1]);
    reverse(l+1);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(0);
    print(arr,n);
    return 0;
}   
