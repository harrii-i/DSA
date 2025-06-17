#include<iostream>
using namespace std;

int main()
{
    int n,q;
    char b;
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    

     int hash[26]={0};

    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    while(q>0)
    {
        cout<<"Enter the character"<<endl;
        cin>>b;
        cout<<hash[b-'a'];
        q--;
    }
    return 0;
}