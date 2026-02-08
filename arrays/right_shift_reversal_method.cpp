#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k to right shift";
    cin>>k;

    reverse(arr,arr+n-k);
    reverse(arr+n-k,arr+n);
    reverse(arr,arr+n);

    cout<<"Updated Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}