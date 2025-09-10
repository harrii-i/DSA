#include<iostream>
using namespace std;

void mergeArray(int *arr1,int *arr2,int n1,int n2){
    int i=0;
    int j=0;
    int n=n1+n2;
    int ind1el=-1;
    int ind2el=-1;
    int count=0;
    int ind2=n/2;
    int ind1=ind2-1;

    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            if(count==ind1) ind1el=arr1[i];
            if(count==ind2) ind2el=arr1[i];
            count++;
            i++;
        }
        else{
            if(count==ind1) ind1el=arr2[j];
            if(count==ind2) ind2el=arr2[j];
            count++;
            j++;
        }
    }

    while(i<n1){
            if(count==ind1) ind1el=arr1[i];
            if(count==ind2) ind2el=arr1[i];
            count++;
            i++;
    }
    while(j<n2){
            if(count==ind1) ind1el=arr2[j];
            if(count==ind2) ind2el=arr2[j];
            count++;
            j++;
    }

    if(n%2==1){
        cout<<ind2el<<endl;
    }
    else{
        cout<<(ind1el+ind2el)/2.0<<endl;
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeArray(arr1, arr2, n1, n2);
    return 0;
}
