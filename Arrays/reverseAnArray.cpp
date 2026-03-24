// Brute Force - using temporal array
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,4,3,2,6,5};
//     int n = arr.size();
//     vector <int> temp(n);
//     for(int i=0;i<n;i++){
//         temp[i] = arr[n-i-1];
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     for(auto x : arr){
//         cout << x << " ";
//     }
//     return 0;
// }

// Optimised - Two Pointer 
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,4,3,2,6,5};
//     int n = arr.size();
//     int l = 0;
//     int r = n-1;
//     while(l<=r){
//         swap(arr[l],arr[r]);
//         l++;
//         r--;
//     }
//     for(auto x : arr) cout << x << " ";
//     return 0;
// }

// Inbuilt 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,4,3,2,6,5};
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    for(auto x : arr) cout << x << " ";
    return 0;
}