// Brute Force 
// Time complexity - O(n^3)
// Space complexity - O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {-10,-3,-5,-6,-20};
//     int n = arr.size();
//     int maxProduct = INT_MIN;
//     for(int i=0;i<n-2;i++){
//         for(int j=i;j<n-1;j++){
//             for(int k=j;k<n;k++){
//                 maxProduct = max(maxProduct, arr[i]*arr[j]*arr[k]);
//             }
//         }
//     }
//     cout << maxProduct << endl;
//     return 0;
// }

// Better - using sorting
// Time complexity - O(n*log(n))
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {-10,-3,-5,-6,-20};  // {10,3,5,6,20}
//     int n =arr.size();
//     sort(arr.begin(),arr.end());   // {-20,-10,-6,-5,-3}   // {3,5,6,10,20}
//     int maxProduct = max((arr[n-1]*arr[n-2]*arr[n-3]) , (arr[0]* arr[1]*arr[n-1]));
//     cout << maxProduct << endl;
//     return 0;
// }

// Optimised - Greedy approach
// Time Complexity - O(n)
// Space complexity - O(1)
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {10,3,5,6,20};
    int n = arr.size();
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;
    int firstMin = INT_MAX;
    int secondMin = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>firstMax){
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        }else if(arr[i]>secondMax){
            thirdMax = secondMax;
            secondMax = arr[i];
        }else if(arr[i]>thirdMax){
            thirdMax = arr[i];
        }
        if(arr[i]<firstMin){
            secondMin = firstMin;
            firstMin = arr[i];
        }else if(arr[i]<secondMin){
            secondMin = arr[i];
        }
    }
    int maxProduct = max((firstMax*secondMax*thirdMax) , (firstMin*secondMin*firstMax));
    cout << maxProduct << endl;
    return 0;
}