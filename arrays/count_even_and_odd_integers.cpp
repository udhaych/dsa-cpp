#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout<<"Even elements count: "<<evenCount<<endl;
    cout<<"Odd elements count: "<<oddCount<<endl;

    return 0;
}
