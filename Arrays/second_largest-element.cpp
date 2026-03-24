// Brute Force   
// Time complexity - O(n*(log(n)) + n) = O(n*(log(n)))
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {12,35,1,10,34,1}; 
//     int n = arr.size();
//     bool flag = false;
//     int secondLargestEle = -1;
//     sort(arr.begin(),arr.end());   //  {1,1,10,12,34,35}
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]!=arr[i+1]){
//             flag = true;
//             secondLargestEle = arr[i];
//             break;
//         }
//     }
//     if(flag==true) cout << secondLargestEle << endl;
//     else cout << secondLargestEle << endl;
//     return 0;
// }

// Better Approach - Two Pass
// Time complexity - O(2*n) = O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {12,35,1,10,34,1};
//     int n = arr.size();
//     int maxEle = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxEle){
//             maxEle = arr[i];
//         }
//     }
//     cout << maxEle << endl;
//     int secondMaxEle = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>secondMaxEle && arr[i] != maxEle){
//             secondMaxEle = arr[i];
//         }
//     }
//     cout << secondMaxEle << endl;
//     return 0;
// }

// Optimal - One pass
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {12,35,1,10,34,1};
    int n = arr.size();
    int maxEle = INT_MIN;
    int secondMaxEle = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxEle){
            secondMaxEle = maxEle;
            maxEle = arr[i];
        }else if(arr[i]>secondMaxEle && arr[i]<maxEle){
            secondMaxEle = arr[i];
        }
    }
    cout << maxEle << endl;
    cout << secondMaxEle << endl;
    return 0;
}