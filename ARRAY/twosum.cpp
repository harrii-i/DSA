#include<iostream>
#include<vector>
#include <map>

using namespace std;

void twosum(int n,vector <int> v,int target)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        int a=v[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end())
        {
            cout <<"Pair found at indices " <<mpp[more]<<" and "<<i<<endl;
        }
        mpp[a]=i;
    }

}

int main()
{
    vector <int> v;
    int x,n,target;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements to add"<<endl;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter the target"<<endl;
    cin>>target;

    twosum(n,v,target);

    return 0;
}