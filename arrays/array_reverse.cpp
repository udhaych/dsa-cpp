#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array:";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    cout<<"Reversed Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}