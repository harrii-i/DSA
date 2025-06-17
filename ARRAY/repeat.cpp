#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sn=(n*(n+1))/2;
    int s2n=(n*(n+1)*(2*n+1))/6;

    int s=0;
    int s2=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
        s2+=arr[i]*arr[i];
    }

    int val1=sn-s;
    int val2=s2n-s2;
    val2=val2/val1;

    int missing=(val1+val2)/2;
    int repeating=missing-val1;

    cout<<"Repeating no: "<<repeating<<" "<<"Missing no: "<<missing<<endl;
}