#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=b;
    b=a;
    a=temp;
}
int main()
{
    int a[10],n,i,j,temp;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}