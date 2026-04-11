// Appoach 1 - Using two pointer
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "abba";
//     int n = str.length();
//     int left = 0;
//     int right = n-1;
//     bool palindrome = true;
//     while(left <=right){
//         if(str[left]!=str[right]){
//             palindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }
//     if(palindrome) cout << 1 << endl;
//     else cout << 0 << endl;
//     return 0;
// }

// Approach 2 - Using One Variable 
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "abba";
//     int n = str.length();
//     bool palindrome =true;
//     for(int i=0;i<n/2;i++){
//         if(str[i]!=str[n-i-1]){
//             palindrome = false;
//             break;
//         }
//     }
//     if(palindrome) cout << 1 << endl;
//     else cout << 0 << endl;
//     return 0;
// }

// Using Recursion
// Time complexity - O(n)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindromeUtil(string &str,int left,int right){
//     if(left>=right) return true;
//     if(str[left]!=str[right]) return false;
//     return isPalindromeUtil(str,left+1,right-1);
// }
// bool isPalindrome(string &str){
//     int left = 0;
//     int right = str.length()-1;
//     return isPalindromeUtil(str,left,right);
// }
// int main(){
//     string str = "abba";
//     int n = str.length();
//     cout << isPalindrome(str);
//     return 0;
// }

// By Reversing String 
// Time complexity - O(n)
// Space complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abba";
    string temp = s;
    reverse(s.begin(),s.end());
    if(temp == s) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}