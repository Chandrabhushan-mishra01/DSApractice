#include <bits/stdc++.h>
using namespace std;

//memoization - TC-O(N) and SC-O(N)+O(N) (one is for stack space and other one is for array space)
int f(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = f(n - 1, dp) + f(n - 2, dp);
    return dp[n];
}

//tabulation - TC-O(N) and SC-O(N) (Remove stack space)
int tf(int n){
    int prev2=0;
    int prev =1;
    for(int i=2; i<=n;i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << tf(n) << endl;
    return 0;
}
