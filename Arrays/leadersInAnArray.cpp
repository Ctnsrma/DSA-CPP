// Brute Force
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {16,17,4,3,5,2};
//     int n = arr.size();
//     vector <int> leader;
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 break;
//             }
//         }
//         if(j==n) leader.push_back(arr[i]);
//     }
//     for(auto x : leader) cout << x << " ";
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {16,17,4,3,5,2};
    int n = arr.size();
    vector <int> leader;
    int maxEle = arr[n-1];
    leader.push_back(maxEle);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=maxEle){
            maxEle = arr[i];
            leader.push_back(maxEle);
        }
    }
    reverse(leader.begin(),leader.end());
    for(auto x : leader) cout << x << " ";
    return 0;
}