#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int target){
    
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(target < arr[mid]){
            end = mid - 1;
        }

        else if(target > arr[mid]){
            start = mid + 1;
        }

        else{
            return mid;
        }
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements in the array (sorted): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    int result = BinarySearch(arr, target);

    if(result != -1)
        cout<<"Element found at index "<<result<<endl;
    else
        cout<<"Element not found"<<endl;

    return 0;
}
