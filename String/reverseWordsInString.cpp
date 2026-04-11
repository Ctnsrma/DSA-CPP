// Naive - Using Stack
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s = "i.like.this.program.very.much";
//     stack<string> st;
//     string word = "";
//     string ans = "";
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] != '.') {
//             word += s[i];
//         }
//         else {
//             st.push(word);
//             word = "";
//         }
//     }
//     if(!word.empty()) {
//         st.push(word);
//     }
//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//         if(!st.empty()) ans += '.';
//     }
//     cout << ans << endl;
//     return 0;
// }


// Using Two Pointer
// Time complexity - O(n)
// Space complexity - O(1)

