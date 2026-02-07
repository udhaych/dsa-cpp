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
    
    int k;
    cout<<"Enter the value of k:";
    cin>>k;

    k=k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

    cout<<"The updated array is:";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}