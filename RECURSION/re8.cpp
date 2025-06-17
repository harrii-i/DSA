/*PALINDROME STRING*/
#include<iostream>
using namespace std;

void swap(char &a,char &b)
{
    char temp=a;
    a=b;
    b=temp;
}

bool pal(string s,int l)
{
    if(l>=s.size()/2)
    return true;
    if(s[l]!=s[s.size()-l-1])
    return false;
    return pal(s,l+1);
}

int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    pal(s,0);
    if(pal(s,0))
    cout<<"Palindrome";
    else
    cout<<"Not";
    return 0;

}