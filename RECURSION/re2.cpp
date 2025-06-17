#include<iostream>
using namespace std;

void prin(int n,int count)
{
    if(count>n)
    return;
    cout<<count<<endl;
    count++;
    prin(n,count);
}

int main()
{
    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    prin(n,1);
    return 0;

}