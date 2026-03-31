// Brute force
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {10,3,5,6,2};
//     int n = arr.size();
//     vector <int> res(n,1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 res[i] *= arr[j];
//             }
//         }
//     }
//     for(auto x : res){
//         cout << x << " ";
//     }
//     return 0;
// }

// Better - Using prefix and sufix array
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {10,3,5,6,2};
//     int n = arr.size();
//     vector <int> prefixProd(n);
//     vector <int> sufixProd(n);
//     vector <int> res(n);
//     prefixProd[0] = 1;
//     for(int i=1;i<n;i++){
//         prefixProd[i] = prefixProd[i-1] * arr[i-1];
//     }
//     sufixProd[n-1] = 1;
//     for(int i = n-2;i>=0;i--){
//         sufixProd[i] = sufixProd[i+1] * arr[i+1];
//     }
//     for(int i=0;i<n;i++){
//         res[i] = sufixProd[i]*prefixProd[i];
//     }
//     for(auto x : res) cout << x << " ";
//     return 0;
// }

// Optimised - using product array
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {10,3,5,6,2};
    int n = arr.size();
    int prod = 1;
    int countZero = 0;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countZero++;
            idx = i;
        }else prod *= arr[i];
    }
    vector <int> ans(n,0); 
    if(countZero == 0){
        for(int i=0;i<n;i++){
            ans[i] = prod/arr[i];
        }
    }else if(countZero == 1){
        ans[idx] = prod;
    }
    for(auto x : ans) cout << x << " ";
    return 0;
}