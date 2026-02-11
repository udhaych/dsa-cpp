#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int arr[n][n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    cout<<"Transpose of array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;

    return 0;
}