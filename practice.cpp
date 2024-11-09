#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    if( (n-1) % 3 == 0){
        cout << n/3 <<" "<< n/3 << endl;
    }
    if( (n-2) % 3 == 0){
        cout << n+2 / 3 <<" "<< (n+1)/3 << endl;
    }
    if( n % 3 == 0){
        cout << n/3 << " " << n/3 << endl;
    }
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
