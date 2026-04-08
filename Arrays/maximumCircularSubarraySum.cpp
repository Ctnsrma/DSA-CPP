// Brute Force
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using  namespace std;
// int main(){
//     vector <int> arr = {8,-8,9,-9,10,-11,12};
//     int n = arr.size();
//     int ans = arr[0];
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=0;j<n;j++){
//             int idx = (i+j)%n;
//             sum += arr[idx];
//             ans = max(sum,ans);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// Better Aproach - Using Prefix and Suffix Sum
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {8,-8,9,-9,10,-11,12};
//     int n = arr.size();
//     vector<int> suffix(n);
//     suffix[n-1] = arr[n-1];
//     for(int i = n-2; i >= 0; i--){
//         suffix[i] = suffix[i+1] + arr[i];
//     }
//     vector<int> maxSuffix(n+1, INT_MIN);
//     maxSuffix[n-1] = suffix[n-1];
//     for(int i = n-2; i >= 0; i--){
//         maxSuffix[i] = max(maxSuffix[i+1], suffix[i]);
//     }
//     int normalSum = arr[0], currSum = 0;
//     int prefix = 0, circularSum = INT_MIN;
//     for(int i = 0; i < n; i++){
//         currSum = max(currSum + arr[i], arr[i]);
//         normalSum = max(normalSum, currSum);
//         prefix += arr[i];
//         if(i != n-1){
//             circularSum = max(circularSum, prefix + maxSuffix[i+1]);
//         }
//     }
//     cout << max(normalSum, circularSum) << endl;
//     return 0;
// }

// Optimised
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr ={8,-8,9,-9,10,-11,12};
    int n = arr.size();
    int totalSum = 0;
    int currMaxSum = 0;
    int currMinSum = 0;
    int minSum = arr[0];
    int maxSum = arr[0];
    for(int i=0;i<n;i++){
        currMaxSum = max(currMaxSum+arr[i],arr[i]);
        maxSum = max(currMaxSum,maxSum);
        currMinSum = min(currMinSum+arr[i],arr[i]);
        minSum = min(currMinSum,minSum);
        totalSum += arr[i];
    }
    int normalSum = maxSum;
    int circularSum = totalSum - minSum;
    if(minSum == totalSum){
        cout << normalSum << endl;
    }else cout << max(normalSum,circularSum);
    return 0;
}