#include<iostream>
using namespace std;
void prin(string name,int n,int count)
{ 
    if(count == n)
    return;
    cout<<name<<endl;
    count++;
    prin(name,n,count);
    
}
int main()
{
    int n;
    string name;
    cout<<"Enter the name"<<endl;
    getline(cin,name);
    cout<<"Enter the limit"<<endl;
    cin>>n;
    prin(name,n,0);
    return 0;
}