#include <bits/stdc++.h>
using namespace std;

int computeLIS(const vector<int>& arr) {
    vector<int> dp;
    for (int num : arr) {
        auto it = lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
    }
    return dp.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxLIS = computeLIS(arr);

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            reverse(arr.begin() + i, arr.begin() + j + 1);
            int currentLIS = computeLIS(arr);
            if (currentLIS > maxLIS) {
                maxLIS = currentLIS;
            }
            reverse(arr.begin() + i, arr.begin() + j + 1);
        }
    }

    cout << maxLIS << endl;
    return 0;
}