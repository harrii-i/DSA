#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=0;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            ans.push_back(arr[i]);
            maxi=max(arr[i],maxi);
        }
    }
    cout<<"Laeaders are :"<<endl;
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}