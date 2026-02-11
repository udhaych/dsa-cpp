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

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }
    
    cout<<"The sum of main diagonal elements is:"<<sum<<endl;

    return 0;
}