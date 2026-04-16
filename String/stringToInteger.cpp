#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = " -0012g4";
    int n = s.length();
    int idx = 0;
    int sign = 1;
    int res = 0;
    while(s[idx]==' ') idx++;
    if(s[idx]=='-' || s[idx]=='+'){
        if(s[idx++]=='-') sign = -1;
    }
    while(s[idx] >= '0' && s[idx] <= '9'){
        if(res > INT_MAX/10 || (res == INT_MAX/10 && s[idx]-'0' > 7)){
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        res = 10 * res + (s[idx++] - '0');
    }
    cout << res * sign << endl;
    return 0;
}