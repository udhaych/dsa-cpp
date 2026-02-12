#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>& arr, int target){

    int n = arr.size();
    int i = 0, j = n-1;

    while(i < j){

        int sum = arr[i] + arr[j];

        if(sum > target){
            j--;
        }

        else if(sum < target){
            i++;
        }

        else{
            return {i, j};
        }
    }

    return {};   // empty if not found
}

int main(){

    vector<int> arr = {2,7,11,15};
    int target = 13;

    vector<int> ans = pairSum(arr, target);

    if(!ans.empty())
        cout<<ans[0]<<" "<<ans[1]<<endl;
    else
        cout<<"No pair found"<<endl;

    return 0;
}
