#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    int n,arr[10];
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q,b;
    cin>>q;
    while(q--)
    {
        cout<<"Enter number"<<endl;
        cin>>b;
        cout<<mpp[b];
    }
}