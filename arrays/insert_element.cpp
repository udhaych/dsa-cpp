#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int pos,value;
    cout<<"Enter the pos and element to insert:";
    cin>>pos>>value;
    
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos]=value;
    n++;

    cout<<"Updated Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}