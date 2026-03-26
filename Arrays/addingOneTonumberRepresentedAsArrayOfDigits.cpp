#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {9,9,9};
    int n = arr.size();
    int carry = 1;
    int sum = 0;
    for(int i=n-1;i>=0;i--){
        sum = arr[i] + carry;
        arr[i] = sum %10;
        carry = sum/10;
    }
    if(carry){
        arr.insert(arr.begin(),carry);
    }
    for(auto x : arr) cout << x << " ";
    return 0;
}