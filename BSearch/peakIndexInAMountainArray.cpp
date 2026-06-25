#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {0,2,1,0};
    int n = arr.size();
    int lo = 1;
    int hi = n-2;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout << mid;
            break;
        }
        else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]) hi = mid -1;
        else lo = mid + 1;
    }
    return 0;
}