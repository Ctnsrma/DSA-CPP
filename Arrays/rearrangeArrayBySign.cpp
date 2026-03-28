// Brute Force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {1,2,3,-4,-1,4};
//     int n = arr.size();
//     for(int i=0;i<n;i++){   // {1,2,-4,-1,3,4}
//         if((i%2==0) && arr[i]<0){   // even index && negative
//             int j = i+1;
//             while(j<n){
//                 if(arr[j]>0){  // checking next positive ele
//                     swap(arr[i],arr[j]);
//                     break;
//                 }
//                 j++;
//             }
//         }
//         else if((i%2!=0) && arr[i]>0){  // odd index && positive
//             int j = i+1;
//             while(j<n){
//                 if(arr[j]<0){
//                     swap(arr[i],arr[j]);
//                     break;
//                 }
//                 j++;
//             }
//         }
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
    vector <int> arr = {1,2,3,-4,-1,4};
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0) pos.push_back(arr[i]);   // {1,2,3,4}
        else neg.push_back(arr[i]);           // {-4,-1}
    }
    int posIdx = 0;
    int negIdx = 0;
    int i = 0;
    while(posIdx < pos.size() && negIdx < neg.size()){
        if(i%2==0) arr[i++] = pos[posIdx++];
        else arr[i++] = neg[negIdx++];
    }
    while(posIdx < pos.size()){
        arr[i++] = pos[posIdx++];
    }
    while(negIdx < neg.size()){
        arr[i++] = neg[negIdx++];
    }
    for(auto x : arr) cout << x << " ";
    return 0;
}