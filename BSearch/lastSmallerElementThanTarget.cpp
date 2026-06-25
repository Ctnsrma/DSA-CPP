#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,4,5,9,15,18,21,24};
    int target = 20;
    int lo = 0;
    int hi = arr.size() - 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout << arr[mid]-1;
            flag = true;
            break;
        }
        if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false) cout << arr[hi] << endl;
    return 0;
}