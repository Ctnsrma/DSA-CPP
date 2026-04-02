// Time complexity - O(n+m)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <vector <int>> arr1 = {{0, 4}, {5, 10}, {13, 20}, {24, 25}};
    vector <vector <int>> arr2 = {{1, 5}, {8, 12}, {15, 24}, {25, 26}};
    int n = arr1.size();
    int m = arr2.size();
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        int l = max(arr1[i][0],arr2[j][0]);
        int r = min(arr1[i][1],arr2[j][1]);
        if(l <= r){
            cout << "[" << l << ", " << r << "]";
        }
        if(arr1[i][1] < arr2[j][1]) i++;
        else j++;
    }
    return 0;
}