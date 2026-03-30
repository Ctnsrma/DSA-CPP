// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int majorityEle(vector <int> &arr){
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=i;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
//         }
//         if(count > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     vector <int> arr = {1,1,2,1,3,5,1};
//     cout << majorityEle(arr);
//     return 0;
// }

// Optimised - Using Moore's Voting algorithm
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,1,2,1,3,5,1};
    int n = arr.size();
    int candidate = -1;
    int count = 0;
    for(int i=0;i<n;i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i]==candidate) count++;
        else count--;
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate) count++;
    }
    if(count > n/2){
        cout << candidate;
    }else cout << -1;
    return 0;
}