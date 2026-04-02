#include <bits/stdc++.h>
using namespace std;
int main(){
    int length = 4;
    vector <int> left = {2};
    vector <int> right = {0,1,3};
    int res = 0;
    for(int i=0;i<left.size();i++){
        res = max(res,left[i]);
    }
    for(int i=0;i<right.size();i++){
        res = max(res,length-right[i]);
    }
    cout << res << endl;
    return 0;
}