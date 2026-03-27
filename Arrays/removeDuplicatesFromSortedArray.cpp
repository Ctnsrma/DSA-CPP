// Using HashSet
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,2,2,2,2};
//     int n = arr.size();
//     unordered_set <int> s;
//     int idx = 0;
//     for(int i=0;i<n;i++){
//         if(s.find(arr[i])==s.end()){
//             s.insert(arr[i]);
//             arr[idx++] = arr[i];
//         }
//     }
//     for(int i=0;i<s.size();i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Optimised - Sorted array only

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,2,2,2,2};
    int n = arr.size();
    int idx = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[idx++] = arr[i];
        }
    }
    for(int i=0;i<idx;i++){
        cout << arr[i] << " ";
    }
    return 0;
}