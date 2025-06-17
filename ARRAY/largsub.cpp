#include<iostream>
#include<vector>
#include<map>

using namespace std;

void subsum(vector <int> v,int k)
{
    int sum=0,maxlen=0;
    int left=0,right=0;
    int n=v.size();
    while(right<n)
    {   
        sum+=v[right];
        while(sum>k)
        {
            sum-=v[left];
            left++;
        }
        
        if(sum==k)   
        {
            maxlen=max(maxlen,right-left+1);
        }

        right++;
        
    }

    cout<<"The maximum length is :"<<maxlen;
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

    cout<<"Enter the subarray sum"<<endl;
    cin>>target;

    subsum(v,target);

}