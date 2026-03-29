// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,3,5,4,2};
    int n = arr.size();
    int pivot = -1;
    for(int i =n-2;i>=0;i--){
        if(arr[i+1]>arr[i]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(arr.begin(),arr.end());
    }
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    reverse(arr.begin()+pivot+1,arr.end());
    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}