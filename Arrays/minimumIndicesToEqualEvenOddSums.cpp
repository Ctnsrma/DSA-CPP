// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,1,6,4};
//     int n = arr.size();
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         int evenSum = 0;
//         int oddSum = 0;
//         int idx = 0;
//         for(int j=0;j<n;j++){
//             if(j==i) continue;
//             if(idx%2==0){
//                 evenSum += arr[j];
//             }else oddSum += arr[j];
//             idx++;
//         }
//         if(evenSum == oddSum){
//             ans++;
//         }
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
    vector <int> arr = {2,1,6,4};
    int n = arr.size();
    int ans = 0;
    int rightEvenSum = 0;
    int rightOddSum = 0;
    for(int i=0;i<n;i++){
        if(i%2==0) rightEvenSum += arr[i];
        else rightOddSum += arr[i];
    }
    int leftEvenSum = 0;
    int leftOddSum = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            rightEvenSum -= arr[i];
        }else rightOddSum -= arr[i];
        if(leftOddSum + rightEvenSum == leftEvenSum + rightOddSum ){
            ans++;
        }
        if(i%2==0){
            leftEvenSum += arr[i];
        }else leftOddSum += arr[i];
    }
    cout << ans << endl;
    return 0;
}