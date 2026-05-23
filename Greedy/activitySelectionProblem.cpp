// Time complexity - O(n*log(n))
// Space complextity - O(n)

#include <bits/stdc++.h>
using namespace std;
bool comp(vector <int>& a,vector <int>& b){
    return a[1] < b[1];
}
int main(){
    vector <int> start = {1,3,0,5,8,5};
    vector <int> finish = {2,4,6,7,9,9};
    int n = finish.size();
    int ans = 1;
    vector <vector <int>> value;
    for(int i=0;i<n;i++){
        value.push_back({start[i],finish[i]});
    }
    sort(value.begin(),value.end(),comp);
    int j = value[0][1]; // index of last selected activity
    for(int i=1;i<n;i++){
        if(value[i][0] > j){
            ans++;
            j = value[i][1];
        }
    }
    cout << ans << endl;
    return 0;
}