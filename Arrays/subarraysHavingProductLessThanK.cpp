// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,3,4};
//     int k = 10;
//     int n = arr.size();
//     int count = 0;
//     int i,j,prod;
//     for(int i=0;i<n;i++){
//         if(arr[i]<k){
//             count++;
//         }
//         prod = arr[i];
//         for(int j=i+1;j<n;j++){
//             prod *= arr[j];
//             if(prod < k){
//                 count++;
//             }else break;
//         }   
//     }
//     cout << count << endl;
//     return 0;
// }

// Optimised - using sliding window
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3,4};
    int n = arr.size();
    int k = 10;
    int count = 0;
    int prod = 1;
    for(int start=0,end=0;end<n;end++){
        prod *= arr[end];
        while(prod>=k && start < end){
            prod /= arr[start++];
        }
        if(prod<k){
            int len = end - start + 1;
            count += len;
        }
    }
    cout << count << endl;
    return 0;
}