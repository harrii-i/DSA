/*BINARY SEARCH*/
#include<iostream>
using namespace std;

int binary(int arr[],int l,int r,int key)
{
    if(l<=r)
    {
        int m=(l+r)/2;
    if(arr[m]==key)
    {
    return m;
    }
    else if(key<arr[m])
    {       
    return binary(arr,l,m-1,key); 
    }
    else if(key>arr[m])
    {    
    return binary(arr,m+1,r,key);
    }
    }
    return -1;
}
int main()
{
    int n,arr[20];
    
    int key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int k=binary(arr,l,r,key);
    if(k>=0)
    cout<<"Element found at index "<<k<<endl;
    else
    cout<<"not";
    return 0;
}