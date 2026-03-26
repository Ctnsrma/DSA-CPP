#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3,4,5};
    int n = arr.size();
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(auto x : arr) cout << x << " ";
    return 0;
}