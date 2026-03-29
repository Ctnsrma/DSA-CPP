// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {14,15,20,30,31,45};
    int lower = 10;
    int upper = 50;
    vector <vector <int>> ans;
    int n = arr.size();
    if(arr[0]-lower >=1){
        ans.push_back({lower,arr[0]-1});
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i] >= 2){
            ans.push_back({arr[i]+1,arr[i+1]-1});
        }
    }
    if(n>0 && upper - arr[n-1] >= 1){
        ans.push_back({arr[n-1]+1,upper});
    }
    for(auto x : ans){
        cout << "[" << x[0] << "," << x[1] << "] ";
    }
    return 0;
}