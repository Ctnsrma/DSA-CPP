// Approach 1 - Using Visited Array
// Time complexity - O(n)
// Space complexity - O(n)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {3,1,3};
//     int n = arr.size();
//     vector <int> freq(n+1,0);
//     int repeatedEle = -1;
//     int missingEle = -1;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(freq[i]==0) missingEle = i;
//         else if(freq[i]==2) repeatedEle = i;
//     }
//     cout << missingEle << " " << repeatedEle << endl;
//     return 0;
// }

// Approach 2 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {3,1,3};
    int n = arr.size();
    int repeatingEle = -1;
    for(int i=0;i<n;i++){
        int val = abs(arr[i]);
        if(arr[val-1]>0) arr[val-1] = -arr[val-1];
        else repeatingEle = val;
    }
    int missingEle = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            missingEle = i+1;
            break;
        }
    }
    cout << repeatingEle << " " << missingEle << endl;
    return 0;
}