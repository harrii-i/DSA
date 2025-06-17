#include<iostream>
using namespace std;
#define n 100
int stack[n];
int top=-1;

void push()
{
    if(top==n-1)
    {
        cout<<"stack full"<<endl;
        return;
    }
    int x;
    cout<<"Enter the number to push"<<endl;
    cin>>x;
    top++;
    stack[top]=x;
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack empty"<<endl;
        return ;
    }
    top--;
}

void size()
{
    int size=top+1;
    cout<<"Size : "<<size<<endl;
}

void display()
{
    
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
}

int main()
{
   int ch;
   cout<<"1.Push"<<endl;
   cout<<"2.Pop"<<endl;
   cout<<"3.Size"<<endl;
   cout<<"4.Display"<<endl;
   cout<<"5.Exit"<<endl;

   while(true)
   {
    cout<<"Enter your choice" <<endl;
    cin>>ch;

    switch(ch)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        size();
        break;

        case 4:
        display();
        break;

        case 5:
        return 0;
    }
   }
}