#include<iostream>
#include<vector>

using namespace std;

void threesum(vector <int> num)
{
    
    sort(num.begin(),num.end());
    for(int i=0;i<num.size();i++)
    {
        if(i>0&&num[i]==num[i-1]) continue;

        int j=i+1;
        int k=num.size()-1;

        while(j<k)
        {
            int sum=num[i]+num[j]+num[k];
            if(sum<0)
            {
                j++;
            }

            else if(sum>0)
            {
                k--;
            }

            else
            {
                cout<<num[i]<<" "<<num[j]<<" "<<num[k];
                j++;
                k--;

                while(j<k && num[j-1]==num[j]) j++;
                while(j<k && num[k-1]==num[k]) k--;
            }
        }
    }
}

int main()
{
    vector<int> num;
    int x,n;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements"<<endl;
        cin>>x;
        num.push_back(x);
    }

    threesum(num);

}