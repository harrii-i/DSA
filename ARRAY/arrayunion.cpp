#include<iostream>
#include<vector>

using namespace std;

void arrayunion(vector<int> a,vector<int> b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;

    vector<int> arrunion;

    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            if(arrunion.size()==0||arrunion.back()!=a[i])
            {
            arrunion.push_back(a[i]);
            }
            i++;
        }

        else
        {
            if(arrunion.size()==0||arrunion.back()!=b[j])
            {
            arrunion.push_back(b[j]);
            }
            j++;
        }

    }

    while(i<n1)
    {
        if(arrunion.size()==0||arrunion.back()!=a[i])
        {
        arrunion.push_back(a[i]);
        }
        i++;
    }
        
    while(j<n2)
    {
        if(arrunion.size()==0||arrunion.back()!=b[j])
        {
        arrunion.push_back(b[j]);
        }
        j++;
    }

    for(auto it:arrunion)
    {
        cout<<it<<" ";
    }
}

int main()
{
    vector<int> a;
    vector<int> b;
    int x;
    int n1,n2;
    cout<<"Enter n1"<<endl;
    cin>>n1;

    cout<<"Enter n2"<<endl;
    cin>>n2;

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i=0;i<n2;i++)
    {
        cin>>x;
        b.push_back(x);
    }

    arrayunion(a,b);
}

