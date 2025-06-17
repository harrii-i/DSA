/*PRINTING STRING FROM MIDDLE*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,s1="";
    cout<<"Enter the string"<<endl;
    cin>>s;
    int l=s.size();
    int m=l/2;
    for(int i=m;i<l;i++)
    {
        s1=s1+s[i];
        cout<<s1<<endl;

    }
    for(int i=0;i<m;i++)
    {
        s1=s1+s[i];
        cout<<s1<<endl;
    }
    return 0;
}