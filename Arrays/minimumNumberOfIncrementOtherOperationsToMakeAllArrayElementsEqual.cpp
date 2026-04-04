// Brute Force 
// Time complexity - O(n^2 logn)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,3};
//     int n = arr.size();
//     int count = 0;
//     sort(arr.begin(),arr.end());
//     while(arr[0]!=arr[n-1]){
//         for(int i=0;i<n-1;i++){
//             arr[i]++;
//         }
//         count++;
//         sort(arr.begin(),arr.end());
//     }
//     cout << count << endl;
//     return 0;
// }

// Optimised
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3};
    int n = arr.size();
    int sum = 0;
    for(int x : arr) sum += x;
    int minEle = INT_MAX;
    for(int i=0;i<n;i++) if(arr[i]<minEle) minEle = arr[i];
    cout << sum - n * minEle;
    return 0;
}