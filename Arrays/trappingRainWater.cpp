// Brute Force 
// Time complexity - O(n^2);
// Space complexity - O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,1,5,3,1,0,4};
//     int n = arr.size();
//     int res = 0;
//     for(int i=0;i<n;i++){
//         int left = arr[i];
//         for(int j=0;j<i;j++){
//             if(arr[j]>left){
//                left = arr[j];
//             }
//         }
//         int right = arr[i];
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>right){
//                 right = arr[j];
//             }
//         }
//         res += (min(left,right)-arr[i]);
//     }
//     cout << res << endl;
//     return 0;
// }

// Better 
// Time complexity - O(n)
// Space complexity - O(n)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,1,5,3,1,0,4};
//     int n = arr.size();
//     int ans = 0;
//     vector <int> left(n);
//     left[0] = arr[0];
//     vector <int> right(n);
//     right[n-1] = arr[n-1];

//     for(int i=1;i<n;i++){
//         left[i] = max(left[i-1],arr[i]);
//     }
//     for(int i=n-2;i>=0;i--){
//         right[i] = max(right[i+1],arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         int minBar = min(left[i],right[i]);
//         ans +=  minBar - arr[i];
//     }
//     cout << ans << endl;
//     return 0;
// }

// Optimised
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,1,5,3,1,0,4};
    int n = arr.size();
    int ans = 0;
    int left = 0;
    int right = n-1;
    int leftM = 0;
    int rightM = 0;
    while(left <= right){
        if(arr[left] <= arr[right]){
            if(arr[left]>=leftM){
                leftM = arr[left];
            }else{
                ans += leftM - arr[left];
            }
            left++;
        }else{
            if(arr[right]>= rightM){
                rightM = arr[right];
            }else{
                ans += rightM - arr[right];
            }
            right--;
        }
    }
    cout << ans << endl;
    return 0;
}