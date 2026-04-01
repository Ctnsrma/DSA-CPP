// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,0,0,1,1,0,1,0,1,1,1};
//     int k = 2;
//     int n = arr.size();
//     int maxLength = 0;
//     for(int i=0;i<n;i++){
//         int countZero = 0;
//         for(int j=i;j<n;j++){
//             int length;
//             if(arr[j]==0) countZero++;
//             if(countZero <= k){
//                 length = j-i+1;
//             }
//             maxLength = max(maxLength,length);
//         }
//     }
//     cout << maxLength << endl;
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,0,0,1,1,0,1,0,1,1,1};
    int n = arr.size();
    int k = 2;
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int countZero = 0;
    while(end < n){
        if(arr[end] == 0) countZero++;
        while(countZero >k){
            if(arr[start]==0){
                countZero--;
            }
            start++;
        }
        maxLength = max(maxLength,end-start+1);
        end++;
    }
    cout << maxLength << endl;
    return 0;
}