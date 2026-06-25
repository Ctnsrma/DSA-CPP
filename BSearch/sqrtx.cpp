#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 20;
    int lo = 0;
    int hi = x;
    bool flag = false;
    int ans = -1;
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if((mid * mid)==x){
            ans = mid;
            flag = true;
            break;
        } 
        if((mid*mid)>x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag) cout << ans;
    else cout << hi;
}