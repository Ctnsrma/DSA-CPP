// Brute Force 
// Time complexity - O(n^2)
// Space complexity O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "racecar";
//     int n = s.length();
//     for(int i=0;i<n;i++){
//         bool found = false;
//         for(int j=0;j<n;j++){
//             if(i!=j && s[i]==s[j]){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found) cout << s[i] << endl;
//     }
//     return 0;
// }

// Using freq array 
// Time complexity - O(2*n)
// Space complexity - O(MAX_CHAR)

#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
int main(){
    string  s = "racecar";
    vector <int> freq(MAX_CHAR,0);
    bool flag = false;
    char ele;
    for(char c : s){
        freq[c - 'a']++;
    }
    for(char c : s){
        if(freq[c - 'a']==1){
            flag = true;
            ele = c;
            break;
        } 
    }
    if(flag) cout << ele << endl;
    else cout << "$" << endl;
    return 0;
}