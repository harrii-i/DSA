#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void largesum(vector <int> a,int n)
{
    int sum=0;
    int maxsum=INT_MIN;
    int ansStart=-1,ansEnd=-1;
    int start=0;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum+=a[i];

        if(sum>maxsum)
        {
            maxsum=sum;
            ansStart=start;
            ansEnd=i;
        }

        if(sum<0)
        {
            sum=0;
        }

    }

    cout<<"The subarray sum is : "<<maxsum;
    cout<<"The array is : "<<endl;
    for(int i=ansStart;i<=ansEnd;i++)
    {
        cout<< a[i] <<" ";
    }
}

int main()
{
    vector <int> a;
    int n,x;
    
    cout<<"Emter the size of the array"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements to add"<<endl;
        cin>>x;
        a.push_back(x);
    }

    largesum(a,n);
}