// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,3,5,8,9,2,6,7,6,8,9};
    int n = arr.size();
    int maxReach = 0;
    int jumps = 0;
    int currentReach = 0;
    if(arr[0]==0){
        cout << -1 << endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        maxReach = max(maxReach,arr[i]+i);
        if(maxReach > n-1){
            cout << jumps + 1;
            return 0;
        }
        if(i == currentReach){
            if(maxReach == i){
                cout << -1 << endl;
                return 0;
            }
        }else {
            jumps++;
            currentReach = maxReach;
        }
    }

}