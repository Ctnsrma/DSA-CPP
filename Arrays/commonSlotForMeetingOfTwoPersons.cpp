// Time complexity - O(n logn)
// Space complexity - O(1)
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <vector <int>> arr1 = {{10,50},{60,120},{140,210}};
    vector <vector <int>> arr2 = {{0,15},{60,70}};
    int d = 8;
    vector <vector <int>> ans;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i = 0;
    int j = 0;
    while(i<arr1.size() && j<arr2.size()){
        int start = max(arr1[i][0],arr2[j][0]);
        int end = min(arr1[i][1],arr2[j][1]);
        if(end-start >= d){
            ans.push_back({start,start+d});
        }
        if(arr1[i][1] < arr2[j][1]){
            i++;
        }else j++;
    }
    if(ans.empty()) cout << "[]";
    else cout << ans[0][0] << " " << ans[0][1];
    return 0;
}