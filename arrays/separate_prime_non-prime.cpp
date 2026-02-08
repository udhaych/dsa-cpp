#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements in the array:";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Prime numbers are:";
    
    for(int i=0;i<n;i++){
    
        int num=arr[i];
    
        bool isPrime=true;
        
        if(num<=1) isPrime=false;
        
        for(int j=2;j*j<=num;j++){
    
            if(num%j==0){
                
                isPrime=false;
                break;
            }
        }
        
        if(isPrime){
    
            cout<<num<<" ";
        }
    }
    
    cout<<"\nNon-prime numbers are:";
    
    for(int i=0;i<n;i++){
        
        int num=arr[i];
        bool isPrime=true;
        
        if(num<=1) isPrime=false;
        
        for(int j=2;j*j<=num;j++){
            
            if(num%j==0){
    
                isPrime=false;
                break;
            }
        }
        
        if(!isPrime){
    
            cout<<num<<" ";
        }
        
    }
    return 0;
}