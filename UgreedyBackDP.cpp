#include<bits/stdc++.h>
using namespace std;

// --------------------------------------------------Greedy------------------------------------------------------
/*
greedy algorithm generally used for optimization problem 
general structure for greedy algorithm-->
getoptimal(item arr[], int n){
    int res=0;
    while(all item are not considered){
        i=selectedAnItem();
        if(feasible(i)){
        res=res+i;
    }
    return res;
} 
*/
int coin(vector<int>& c, int x) {
    sort(c.rbegin(), c.rend()); 
    int res = 0;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] <= x) {
            int t = x / c[i]; 
            res += t;
            x %= c[i];
        }
        if (x == 0) {
            break;
        }
    }
    return res;
}
// */


int main() {
    vector<int> a = {10, 5, 2, 1};
    int x = 56;
    cout << coin(a, x) << endl;
    return 0;
}
