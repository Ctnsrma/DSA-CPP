// Cases 
// (i) If k is not a multiple of n where n is the size of the array, for the last group we will have less than k elements left, we need to reverse all remaining elements. 
// (ii) If k = 1, the array should remain unchanged. If k >= n, we reverse all elements present in the array.


#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8};
    int k = 9;
    int n = arr.size();
    for(int i=0;i<n;i+=k){
        int l = i;
        int r = min(i+k-1,n-1);
        while(l<r){
            swap(arr[l++],arr[r--]);
        }
    }
    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}