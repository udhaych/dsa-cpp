#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[2][2]={{1,2},{3,4}}, brr[2][2]={{5,6},{7,8}}, crr[2][2]={0};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    
    cout<<"Resultant array:"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}