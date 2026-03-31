// Brute force 
// Time complexity - O(n^2)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {-2,6,-3,-10,0,2};
//     int n = arr.size();
//     int res = arr[0];
//     for(int i=0;i<n;i++){
//         int prod = 1;
//         for(int j=i;j<n;j++){
//             prod *= arr[j];
//             res = max(res,prod);
//         }
//     }
//     cout << res << endl;
//     return 0;
// }

// Approach 2 - using track of min and max 
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {-2,6,-3,-10,0,2};
//     int n = arr.size();
//     int currMin = arr[0];
//     int currMax = arr[0];
//     int maxProd = arr[0];
//     for(int i=1;i<n;i++){
//         int temp = max({arr[i],currMin*arr[i],currMax*arr[i]});
//         currMin = min({arr[i],currMin*arr[i],currMax*arr[i]});
//         currMax = temp;
//         maxProd = max(maxProd,currMax);
//     }
//     cout << maxProd << endl;;
//     return 0;
// }

// Approach 3 - By traversing both side
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {-2,6,-3,-10,0,2};
    int n = arr.size();
    int leftToRight = 1;
    int rightToLeft = 1;
    int maxProd = INT_MIN;
    for(int i=0;i<n;i++){
        if(leftToRight == 0) leftToRight = 1;
        if(rightToLeft == 0) rightToLeft = 1;
        leftToRight *= arr[i];
        int j = n-i-1;
        rightToLeft *= arr[j];
        maxProd = max({maxProd,leftToRight,rightToLeft});
    }
    cout << maxProd << endl;
}