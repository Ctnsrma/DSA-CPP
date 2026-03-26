// Brute Force 
// Time Complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,0,4,3,0,5,0};
//     int n = arr.size();
//     vector <int> temp(n);
//     int j = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp[j++] = arr[i];
//         }
//     }
//     while(j<n){
//         temp[j++] = 0;
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     for(auto x : arr){
//         cout << x << " ";
//     }
//     return 0;
// }

// Better 
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,0,4,3,0,5,0};
//     int n = arr.size();
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[count++] = arr[i];
//         }
//     }
//     while(count<n){
//         arr[count++] = 0;
//     }
//     for(auto x : arr) cout << x << " ";
//     return 0;
// }

// Optimised
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,0,4,3,0,5,0};
    int n = arr.size();
    int count = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[count++],arr[i]);
        }
    }
    while(count<n) arr[count++] = 0;
    for(auto x : arr) cout << x << " ";
    return 0;
}