// Time complexity - O(1)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 39;
    vector <int> den = {1,2,5,10};
    int ans = 0;
    for(int i=den.size();i>=0;i--){
        ans += n/den[i];
        n %= den[i];
    }
    cout << ans << endl;
    return 0;
}