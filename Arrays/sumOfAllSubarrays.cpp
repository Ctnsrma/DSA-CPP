// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,4,5,3,2};
//     int n = arr.size();
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         int temp = 0;
//         for(int j=i;j<n;j++){
//             temp += arr[j];
//             sum += temp;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,4,5,3,2};
    int n = arr.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (arr[i] * (i+1) * (n-i));
    }
    cout << sum << endl;
    return 0;
}