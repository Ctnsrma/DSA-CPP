// Brute force 
// Time complexity - O(n logn)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,-3,4,1,1,7};
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     int missingEle = 1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==missingEle){
//             missingEle++;
//         }else if(arr[i]>missingEle){
//             break;
//         }
//     }
//     cout << missingEle << endl;
//     return 0;
// }

// Better - Using Visited Array
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,-3,4,1,1,7};
//     int n = arr.size();
//     vector <int> visit(n,false);
//     for(int i=0;i<n;i++){
//         if(arr[i]>0 && arr[i]<=n){
//             visit[arr[i]-1] = true;
//         }
//     }
//     int missingEle = -1;
//     for(int i=0;i<n;i++){
//         if(!visit[i-1]){
//             missingEle = i;
//             break;
//         }
//     }
//     if(missingEle == -1) cout << n+1 << endl;
//     else cout << missingEle << endl;
//     return 0;
// }

// Optimised - Using Cycle Sort
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {2,-3,4,1,1,7};
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         while(arr[i]>= 1 && arr[i] <= n && arr[i] != arr[arr[i]-1]){
//             swap(arr[i],arr[arr[i]-1]);
//         }
//     }
//     int missingEle = -1;
//     for(int i=1;i<=n;i++){
//         if(i != arr[i-1]){
//             missingEle = i;
//             break;
//         }
//     }
//     if(missingEle != -1) cout << missingEle << endl;
//     else cout << n +1;
//     return 0;
// }

// Optimised - By marking indices
// Time complexity - O(n)
// Space complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,-3,4,1,1,7};
    int n = arr.size();
    int missingEle = 1;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << 1 << endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=0 || arr[i]>n){
            arr[i] = 1;
        }
    }
    for(int i=0;i<n;i++){
        int idx = (arr[i]-1 )%n;
        arr[idx] += n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=n){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n + 1 << endl;
    return 0;
}