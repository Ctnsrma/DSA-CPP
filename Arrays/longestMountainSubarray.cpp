// Brute Force 
// Time complexity - O(n^2)
// Space compelxity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,3,1,4,5,6,7,8,9,8,7,6,5};
//     int n = arr.size();
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         int inc = 0;
//         int dec = 0;
//         int j = i+1;
//         while(j<n && arr[j]>arr[j-1]){
//             inc = 1;
//             j++;
//         }
//         while(j<n && arr[j]<arr[j-1]){
//             dec = 1;
//             j++;
//         }
//         if(inc && dec){
//             ans = max(ans,j-i);
//             inc = 0;
//             dec = 0;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// Optimised - Using Two Pointer
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,3,1,4,5,6,7,8,9,8,7,6,5};
    int n = arr.size();
    int ans = 0;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            int left = i;
            int right = i;
            while(left > 0 && arr[left]>arr[left-1]){
                left--;
            }
            while(right < n-1 && arr[right] > arr[right+1]){
                right++;
            }
            int maxLength = right - left + 1;
            ans = max(ans,maxLength);
        }
    }
    cout << ans << endl;
    return 0;
}