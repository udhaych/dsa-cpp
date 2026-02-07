#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements in the array:"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int pos;
    cout<<"Enter the position to delete element:";
    cin>>pos;
    
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    n--;
    
    cout<<"Updated Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
        
    }
    return 0;
}