// Naive - Using Stack
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "i.love.this.program.very.much";
//     int n = s.length();
//     string result = "";
//     stack <string> st;
//     for(int i=0;i<n;i++){
//         if(s[i]!='.'){
//             result += s[i];
//         }else if(!result.empty()){
//             st.push(result);
//             result = "";
//         }
//     }
//     if(!result.empty()){
//         st.push(result);
//     }
//     result = "";
//     while(!st.empty()){
//         result += st.top();
//         st.pop();
//         if(!st.empty()){
//             result += ".";
//         }
//     }
//     cout << result << endl;
//     return 0;
// }

// Using Two Pointer
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "i.love.this.program.very.much";
    reverse(s.begin(),s.end());
    int n = s.length();
    int i = 0;
    for(int l=0;l<n;l++){
        if(s[l]!='.'){
            if(i != 0) s[i++] = '.';
            int r = l;
            while(r < n && s[r] != '.') s[i++] = s[r++];
            reverse(s.begin()+i - (r-l),s.begin()+i);
            l = r;
        }
    }
    s.erase(s.begin()+i,s.end());
    cout << s << endl;
    return 0;
}
