#include<iostream>
using namespace std;

void prin(int count)
{
    if(count==0)
    return;
    cout<<count<<endl;
    count--;
    prin(count);
}

int main()
{
    int count;
    cout<<"Enter the limit"<<endl;
    cin>>count;
    prin(count);
    return 0;
}