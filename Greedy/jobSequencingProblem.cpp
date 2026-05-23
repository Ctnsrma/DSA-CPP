// Time complexity - O(n^2)
// Space complexity - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// bool comp(vector <int>& a,vector <int>& b){
//     return a[1] > b[1];
// }
// int main(){
//     vector <int> deadline = {2,1,2,1,1};
//     vector <int> profit = {100,19,27,25,15};
//     int count = 0;
//     int totProfit = 0;
//     vector <vector <int>> value;
//     for(int i=0;i<profit.size();i++){
//         value.push_back({deadline[i],profit[i]});
//     }
//     sort(value.begin(),value.end(),comp);
    
//     int maxDeadline = 0;
//     for(int i=0;i<deadline.size();i++){
//         maxDeadline = max(maxDeadline,deadline[i]);
//     }
//     vector <int> slot(maxDeadline+1,-1);

//     for(int i=0;i<value.size();i++){
//         int d = value[i][0];
//         int p = value[i][1];
//         for(int j = d;j>=1;j--){
//             if(slot[j]==-1){
//                 slot[j] = p;
//                 count++;
//                 totProfit += p;
//                 break;
//             }
//         }
//     }
//     cout << count << " " << totProfit << endl;
//     return 0;
// }

// Optimised - using DSU  - Instead of checking every slot backward, directly find the latest available slot using DSU.
// Time complexity - O(n*log(n))
// Space complexity - O(d)

#include <bits/stdc++.h>
using namespace std;
bool comp(vector <int>& a,vector <int>& b){
    return a[1] > b[1];
}
int findParent(int x,vector <int>& parent){
    if(parent[x] == x){
        return x;
    }
    return parent[x] = findParent(parent[x], parent);
}
int main(){
    vector <int> deadline = {2,1,2,1,1};
    vector <int> profit = {100,19,27,25,15};
    int n = deadline.size();
    int count = 0;
    int totProfit = 0;
    vector <vector <int>> value;
    for(int i=0;i<n;i++){
        value.push_back({deadline[i],profit[i]});
    }
    sort(value.begin(),value.end(),comp);
    int maxDeadline = 0;
    for(int i=0;i<n;i++) maxDeadline = max(maxDeadline,deadline[i]);
    vector <int> parent(maxDeadline+1);
    for(int i=0;i<=maxDeadline;i++){
        parent[i] = i;
    }
    for(int i=0;i<n;i++){
        int p = value[i][1];
        int d = value[i][0];
        int slot = findParent(d,parent);
        if(slot > 0){
            count++;
            totProfit += p;
            parent[slot] = findParent(slot - 1, parent);
        }
    }
    cout << count << " " << totProfit << endl;
    return 0;
}