#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number to search for in the array:";
    cin>>x;
    bool found= false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Number found at index"<<i<<endl;
            found= true;
            break;
        }
    }
    if(found==false){
    cout<<"Number not found in the array!"<<endl;
    }
    return 0;
}