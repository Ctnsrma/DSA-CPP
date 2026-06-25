#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {5,7,7,8,8,10};
    int target = 8;
    int n = arr.size();
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(mid == 0 || arr[mid-1]!=target){
                ans = mid;
                break;
            }
            hi = mid - 1;
        }
        else if(arr[mid]>target) hi = mid -1;
        else lo = mid + 1;
    }
    cout << ans << endl;
    return 0;
}