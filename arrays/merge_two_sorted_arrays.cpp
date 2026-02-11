#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int n1;
    cout<<"Enter the size of the first array:";
    cin>>n1;

    int arr1[n1];
    cout<<"Enter the elements in the first array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter the size of the second array:";
    cin>>n2;

    int arr2[n2];
    cout<<"Enter the elements in the second array:";
    for(int j=0;j<n2;j++){
        cin>>arr2[j];
    }

    int merged[n1+n2];
    int i=0,j=0,k=0;

    while(i<n1 && j<n2){

        if(arr1[i]>arr2[j]){
            merged[k]=arr2[j];
            j++;
        }

        else{
            merged[k]=arr1[i];
            i++;
        }
        k++;
    }

    while(i<n1){
        merged[k++]=arr1[i++];
    }

    while(j<n2){
        merged[k++]=arr2[j++];
    }

    cout<<"The Resultant Merged Sorted Array is:";
    for(int x=0;x<n1+n2;x++){
        cout<<merged[x]<<" ";
    }

    return 0;
}