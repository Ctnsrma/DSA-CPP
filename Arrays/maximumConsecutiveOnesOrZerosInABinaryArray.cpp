// Appoah one
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {0,1,0,1,1,1,1};
//     int n = arr.size();
//     int maxCount = 0;
//     int streak = 1;
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             streak++;
//         }else {
//             maxCount = max(maxCount,streak);
//             streak = 1;
//         }
//     }
//     maxCount = max(maxCount,streak);
//     cout << maxCount << endl;
// }

// Approach Two - Bit Manipulation
// Time complexity - O(n)
// Space complextiy - O(1)
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {0,1,0,1,1,1,1};
    int n = arr.size();
    int maxCount = 0;
    int streak = 1;
    int prev = -1;
    for(int i=1;i<n;i++){
        if((prev ^ arr[i])==0){
            streak++;
        }else{
            maxCount = max(maxCount,streak);
            streak = 1;
        }
        prev = arr[i];
    }
    maxCount = max(maxCount,streak);
    cout << maxCount << endl;
    return 0;
}