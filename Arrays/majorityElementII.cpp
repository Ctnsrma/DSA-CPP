// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,2,3,1,3,2,1,1};
//     int n = arr.size();
//     vector <int> ans;
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=i;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
//         }
//         if(count > floor(n/3)){
//             if(ans.size()== 0 || arr[i] != ans[0])
//             ans.push_back(arr[i]);
//         }
//     }
//     sort(ans.begin(),ans.end());
//     for(auto x : ans) cout << x << " ";
//     return 0;
// }

// Optimised - Boyer-Moore's Voting Algorithm
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,2,3,1,3,2,1,1};
    int n = arr.size();
    vector <int> ans;
    int ele1 = -1;
    int ele2 = -1;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0;i<n;i++){
        if(ele1==arr[i]) cnt1++;
        else if(ele2==arr[i]) cnt2++;
        else if(cnt1 ==0){
            ele1 = arr[i];
            cnt1++;
        }else if(cnt2 ==0){
            ele2 = arr[i];
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 = 0;
    for(int x : arr){
        if(ele1 == x) cnt1++;
        if(ele2 == x) cnt2++;
    }
    if(cnt1 > n/3) ans.push_back(ele1);
    if(cnt2 > n/3 && ele1 != ele2) ans.push_back(ele2);
    sort(ans.begin(),ans.end());
    for(auto x : ans) cout << x << " ";
    return 0;
}