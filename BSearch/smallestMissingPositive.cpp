#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {0,1,2,3,4,8,9,12};
    int n = arr.size();
    int ans = -1;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) lo = mid + 1;
        else {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}