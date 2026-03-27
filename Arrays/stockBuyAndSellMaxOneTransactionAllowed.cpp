// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {7,10,1,3,6,9,2};
//     int n = arr.size();
//     int maxDiff = 0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             maxDiff = max(maxDiff,(arr[j]-arr[i]));
//         }
//     }
//     cout << maxDiff << endl;
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {7,10,1,3,6,9,2};
    int n = arr.size();
    int maxDiff = 0;
    int minBuy = arr[0];
    for(int i=1;i<n;i++){
        minBuy = min(minBuy,arr[i]);
        maxDiff = max(maxDiff,(arr[i]-minBuy));
    }
    cout << maxDiff << endl;
    return 0;
}
