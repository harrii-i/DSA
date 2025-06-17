#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int largest=a[0];
    int slargest=-1;

    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest&&a[i]>slargest)
        {
            slargest=a[i];
        }
    }
    cout<<"Second largest element is : ";
    cout<<slargest;
    return 0;
}