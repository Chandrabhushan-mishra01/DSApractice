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
int tfs(int n, vector<int>& dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

//remove array space also 
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

//frog
int frog(int n){
    if(n==0) return 0;

    
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << tfs(n,dp) << endl;
    return 0;
}
