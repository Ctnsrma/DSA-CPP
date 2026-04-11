// Using extra String 
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Chetan";
//     int n = s.length();
//     string str;
//     for(int i=n-1;i>=0;i--){
//         str.push_back(s[i]);
//     }
//     cout << str << endl;
//     return 0;
// }

// Using Two Pointer
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "chetan";
//     int n = s.length();
//     int left = 0;
//     int right = n-1;
//     while(left < right){
//         swap(s[left],s[right]);
//         left++;
//         right--;
//     }
//     cout << s << endl;
//     return 0;
// }

// Using Recursion
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// void reverseStringUtil(string &s,int left,int right){
//     if(left>=right) return;
//     swap(s[left],s[right]);
//     reverseStringUtil(s,left+1,right-1);

// }
// string reverseString(string &s){
//     int n = s.length();
//     reverseStringUtil(s,0,n-1);
//     return s;
    
// }
// int main(){
//     string s = "chetan";
//     cout << reverseString(s);
//     return 0;
// }

// Using Stack 
// Time complexity - O(n)
// Space complexity O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "chetan";
//     stack <char> st;
//     for(int i=0;i<s.length();i++){
//         st.push(s[i]);
//     }
//     for(int i=0;i<s.length();i++){
//         s[i] = st.top();
//         st.pop();
//     }
//     cout << s << endl;
//     return 0;
// }
