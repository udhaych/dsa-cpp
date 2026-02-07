#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of elements in the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter how many positions to left shift: ";
    cin>>k;

    k = k % n;

    while(k--){
        int first = arr[0];

        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }

        arr[n-1] = first;
    }

    cout<<"The final array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
