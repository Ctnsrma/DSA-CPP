// Brute Force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,1,0,1,0,1,1};
//     int n = arr.size();
//     int countOne = 0;
//     int Swap = 0;
//     for(int x : arr) if(arr[x]==1) countOne++;
//     int minSwap = INT_MAX;
//     for(int i=0;i<=n-countOne;i++){
//         int one = 0;
//         for(int j=i;j<countOne+i;j++){
//             if(arr[j]) one++;
//         }
//         minSwap = min(minSwap,(countOne - one));
//     }
//     cout << minSwap << endl;
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,1,0,1,0,1,1};
    int n = arr.size();
    int countOne = 0;
    for(int x : arr) if(x==1) countOne++;
    int zero = 0;
    for(int i=0;i<countOne;i++) if(arr[i]==0) zero++;
    int minSwap = zero;
    for(int i=countOne;i<n;i++){
        if(arr[i]==0) zero++;
        if(arr[i-countOne] == 0) zero--;
        minSwap = min(minSwap,zero);
    }
    cout << minSwap << endl;
}