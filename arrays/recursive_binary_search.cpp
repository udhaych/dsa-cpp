#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& arr, int low, int high, int target){

    if(low > high){
        return -1;
    }

    int mid = low + (high - low) / 2;

    if(arr[mid] == target){
        return mid;
    }

    else if(target < arr[mid]){
        return BinarySearch(arr, low, mid-1, target);
    }

    else{
        return BinarySearch(arr, mid+1, high, target);
    }
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements in the array (sorted): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    int result = BinarySearch(arr, 0, n-1, target);

    if(result != -1)
        
        cout<<"Element found at index: "<<result<<endl;
    
    else
        
        cout<<"Element not found!"<<endl;

    return 0;
}
