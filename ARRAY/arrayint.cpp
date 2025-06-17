#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter size of array1"<<endl;
    cin>>n1;

    cout<<"Enter size of array 2"<<endl;
    cin>>n2;
    int a1[n1],a2[n2];
    cout<<"Enter the elements of array 1"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }

    cout<<"Enter the elements of array 2"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }

    vector<int> vis(n2,0);
    
    vector<int> arr;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]==a2[j]&&vis[j]==0)
            {
                arr.push_back(a2[j]);
                vis[j]=1;
                break;
            }
        }
    }

    cout << "Intersection elements are:" << endl;
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}