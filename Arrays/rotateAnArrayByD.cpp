// Brute force - Rotate one by one
// Time complexity - O(n*d);
// Space complexity - O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,3,4,5,6};
//     int d = 2;
//     int n = arr.size();
//     for(int i=0;i<d;i++){
//         int first = arr[0];
//         for(int j=0;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//         arr[n-1] = first;
//     }
//     for(auto x : arr) cout << x << " ";
//     return 0;
// }

// Better - using temporary array
// Time complexity - O(n);
// Space complexity - O(n);
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,3,4,5,6};
//     int d = 2;
//     int n = arr.size();
//     vector <int> temp(n);

//     d %= n;  // when d > n
//     for(int i=d;i<n;i++){
//         temp[i-d] = arr[i];
//     }
//     for(int i=0;i<d;i++){
//         temp[n-d+i] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     for(auto x : arr) cout << x << " ";
//     return 0;
// }

// Optimised - reversal algorithm
// Time complexity - O(n)
// Space complexity - O(1)
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3,4,5,6};
    int d = 2;
    int n = arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    for(auto x : arr) cout << x << " ";
    return 0;
}

