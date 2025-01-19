#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, arr[i]-temp);
        temp = arr[i];
    }
    ans = max(ans,2*(x-temp));
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
