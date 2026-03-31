// Brute Force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,3,-8,7,-1,2,3};
//     int n = arr.size();
//     int ans = arr[0];
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//             sum += arr[j];
//         }
//         ans = max(ans,sum);
//     }
//     cout << ans << endl;
//     return 0;
// }

// Optimised - Using Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,3,-8,7,-1,2,3};
    int n = arr.size();
    int res = arr[0];
    int maxEnd = arr[0];
    for(int i=1;i<n;i++){
        maxEnd = max(arr[i],maxEnd+arr[i]);
        res = max(res,maxEnd);
    }
    cout << res << endl;
    return 0;
}