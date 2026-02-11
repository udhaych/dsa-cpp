#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the size of n:";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=0;

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[index]){
            index++;
            arr[index]=arr[i];
        }
    }

    cout<<"Updated array without duplicate values:";
    for(int i=0;i<=index;i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}