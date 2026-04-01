// Brute force 
// Time complexity - O(n^3)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int findSum(vector <int>& arr, int start,int end){
//     int sum = 0;
//     for(int i=start;i<=end;i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// vector <int> findSplit(vector <int> &arr){
//     int n = arr.size();
//     for(int i=0;i<n-2;i++){
//         for(int j=i+1;j<n-1;j++){
//             int sum1 = findSum(arr,0,i);
//             int sum2 = findSum(arr,i+1,j);
//             int sum3 = findSum(arr,j+1,n-1);
//             if(sum1 == sum2 && sum2 == sum3){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};

// }
// int main(){
//     vector <int> arr = {1,3,4,0,4};
//     vector<int> res = findSplit(arr);
//     cout << res[0] << " " << res[1];
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
vector <int> findSplit(vector <int>& arr){
    vector <int> res;
    int n = arr.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum % 3 != 0){
        res = {-1,-1};
        return res;
    }
    int currSum = 0;
        for(int i=0;i<n;i++){
            currSum += arr[i];
            if(currSum == sum/3){
                res.push_back(i);
                currSum = 0;
            }
            if(res.size() == 2 && i<n-1){
                return res;
            }
        }
        res = {-1,-1};
        return res;
}
int main(){
    vector <int> arr = {1,3,4,0,4};
    int n = arr.size();
    vector <int> ans = findSplit(arr);
    cout << ans[0] << " " << ans[1];
    return 0;
}