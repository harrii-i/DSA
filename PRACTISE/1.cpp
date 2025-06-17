/*PRINTING A VALUE NOT IN CONTINOUS SEQUENCE*/
#include<iostream>
using namespace std;

int find(int arr[],int n,int i)
{
    
        if(i>n-1)
        return 1;
        else if(arr[i+1]-arr[i]==1)
        return find(arr,n,i+1);

    cout<<"The number is "<<arr[i]+1;
    return -1;
    
}

int main()
{
    int arr[10],n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    find(arr,n,0);

    return 0;
}