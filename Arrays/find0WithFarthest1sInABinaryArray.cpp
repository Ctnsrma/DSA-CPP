// Brute force
// Time complexity - O(n) 
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "1000101";
//     int n = str.length();
//     vector <int> left(n,-1);
//     vector <int> right(n,-1);
//     int last = -1;
//     for(int i=0;i<n;i++){
//         if(str[i]=='1') last = i;
//         left[i] = last;
//     }
//     last = -1;
//     for(int i=n-1;i>=0;i--){
//         if(str[i]=='1') last = i;
//         right[i] = last;
//     }
//     int res = -1;
//     int maxDis = -1;
//     for(int i=0;i<n;i++){
//         if(str[i]=='0' && left[i]!=-1 && right[i]!=-1){
//             int dist = right[i]-left[i];
//             if(dist > maxDis){
//                 maxDis = dist;
//                 res = i;
//             }
//         }
//     }
//     cout << res << endl;
//     return 0;
// }


// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "1000101";
    int n = str.length();
    int prev = -1;
    int res = -1;
    int maxDis = -1;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            if(prev != -1){
                int dist = i - prev;
                if(dist > maxDis){
                    maxDis = dist;
                    res = prev + 1;
                }
            }
            prev = i;
        }
    }
    cout << res << endl;
    return 0;
}