#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    if(n < 2){
        cout<<"Second largest element does not exist."<<endl;
        return 0;
    }

    int arr[n];
    cout<<"Enter the elements in the array:"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    cout<<"Largest element: "<<largest<<endl;

    if(secondLargest == INT_MIN){
        cout<<"Second largest element does not exist."<<endl;
    } else {
        cout<<"Second largest element: "<<secondLargest<<endl;
    }

    return 0;
}
