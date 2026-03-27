// Using Maxima and Minima
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {100,180,260,310,40,535,695};
//     int n = arr.size();
//     int profit = 0;
//     int minBuy = arr[0];
//     int maxSell = arr[0];
//     int i = 0;
//     while(i<n-1){
//         while(i<n-1 && arr[i]>=arr[i+1]){
//             i++;
//         }
//         minBuy = arr[i];
//         while(i<n-1 && arr[i]<=arr[i+1]){
//             i++;
//         }
//         maxSell = arr[i];
//         profit = profit + (maxSell - minBuy);
//     }
//     cout << profit << endl;
// }

// Optimised 
// Time complexity - O(n)
// Space complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> arr = {100,180,260,310,40,535,695};
//     int n = arr.size();
//     int profit = 0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[i-1]){
//             profit += arr[i] - arr[i-1];
//         }
//     }
//     cout << profit << endl;
// }