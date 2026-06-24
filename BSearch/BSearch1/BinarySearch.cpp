#include <bits/stdc++.h>
using namespace std;
int isPresent(vector <int> &arr,int target){
    int n = arr.size();
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;
}
int main(){
    vector <int> arr = {-1,0,3,5,9,12};
    int target = 9;
    cout << isPresent(arr,target);
    return 0;
}