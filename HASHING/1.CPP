#include<iostream>
using namespace std;

int main()
{
    int a[10],b,n,q;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int hash[13]={0};

    for(int i=0;i<n;i++)
    {
        hash[a[i]]+=1;
    }

    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    while(q>0)
    {
        cout<<"Enter the number"<<endl;
        cin>>b;
        cout<<hash[b];
        q--;
    }
    return 0;
}