// Brute Force
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1 = "abcd";
//     int n = s1.length();
//     string s2 = "cdab";
//     bool flag = false;
//     if(s1.length()!=s2.length()){
//         cout << false;
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         if(s1==s2){
//             flag  = true;
//             break;
//         }
//         char last = s1.back();
//         s1.pop_back();
//         s1 = last + s1;
//     }
//     if(!flag) cout << false << endl;
//     else cout << true << endl;
//     return 0;
// }


// Inbuilt 
// Time complexity - O(n)
// Space complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "abcd";
    string s2 = "cdab";
    if(s1.length() != s2.length()){
        cout << false << endl;
        return 0;
    }
    string doubled = s1 + s1;
    int idx = doubled.find(s2);
    if(idx==-1) cout << false << endl;
    else cout << true << endl;
    return 0;
}