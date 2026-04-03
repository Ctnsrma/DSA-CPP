// Brute Force
// Time complexity - O(n logn)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {-4,-2,0,2,4};
//     int n = arr.size();
//     int a = 1;
//     int b = 3;
//     int c = 5;
//     for(int i=0;i<n;i++){
//         arr[i] = a*arr[i]*arr[i] + b*arr[i] + c;
//     }
//     sort(arr.begin(),arr.end());
//     for(auto x : arr) cout << x << " ";
//     return 0;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {-4,-2,0,2,4};
    int n = arr.size();
    int a = 1;
    int b = 3;
    int c = 5;
    int left = 0;
    int right = n-1;
    vector <int> newArr(n);
    int idx = (a >= 0) ? n-1 : 0;
    while(left <= right){
        int leftVal = a * arr[left] * arr[left] + b * arr[left] + c;
        int rightVal = a * arr[right] * arr[right] + b * arr[right] + c;
        if(a >=0 ){
            if(leftVal > rightVal){
                newArr[idx--] = leftVal;
                left++;
            }else {
                newArr[idx--] = rightVal;
                right--;
            }
        }else{
            if(leftVal < rightVal){
                newArr[idx++] = leftVal;
                left++;
            }else{
                newArr[idx++] = rightVal;
                right--;
            }
        }
    }

    for(auto x : newArr) cout << x << " ";
    return 0;
}