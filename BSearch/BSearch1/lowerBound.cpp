#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int lo = 0;
    int hi = arr.size() - 1;
    int ans = arr.size();   // Default: no lower bound found

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] >= target) {
            ans = mid;      // Potential lower bound
            hi = mid - 1;   // Search further left
        } else {
            lo = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 9, 15, 18, 21, 24};

    int target;
    cin >> target;

    int idx = lowerBound(arr, target);

    if (idx == arr.size()) {
        cout << "No lower bound exists\n";
    } else {
        cout << "Lower Bound Index = " << idx << endl;
        cout << "Lower Bound Value = " << arr[idx] << endl;
    }

    return 0;
}