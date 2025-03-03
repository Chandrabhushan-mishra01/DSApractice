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
    consider 
           c[]={18,1,10}
           x=20;
           minimum optimal no of coin is 2 -- 10, 10 coin
           but my code ouput is 3 -- 18, 1, 1 coin
    so, geedy algo not always useful

    Application:
    1.finding optimal solution 
            |->  Activity selection. 
            |->  fractional knapsack.
            |->  job sequencing. 
            |->  prim's algo.
            |->  kruskal's algo. 
            |->  dijkstra's algo. 
            |->  huffman coding.

    2.Finding close to optiomal solutions for NP Hard problems like travelling salesman problem 
*/

//Activity selection problem 
bool mycmp(pair<int, int> a, pair<int, int> b) {
    return (a.second < b.second);
}

int maxActivity(pair<int, int> arr[], int n) {
    sort(arr, arr + n, mycmp);
    int prev = 0;
    int count = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i].first >= arr[prev].second) {
            count++;
            prev = i;
        }
    }
    return count;
}

//fractional knapsack 
bool myCmp(pair<int, int> a, pair<int, int> b) {
    return (double)a.second / a.first > (double)b.second / b.first; 
}

double fracKnapsack(pair<int, int> arr[], int n, int cap) {
    sort(arr, arr + n, myCmp);
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        // if (arr[i].first > cap) {  
        //     ans += (double)cap * arr[i].second / arr[i].first;
        //     break;
        // } else {  
        //     ans += arr[i].second;
        //     cap -= arr[i].first;
        // }
        int x = min(arr[i].first, cap);
        ans +=  (double)x * arr[i].second / arr[i].first;
        cap -= x;
    }
    return ans;
}


int main() {
    pair<int, int> arr[] = {{50, 600}, {20, 500}, {30, 400}}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int capacity = 70;

    double maxValue = fracKnapsack(arr, n, capacity);
    cout << "Maximum value in Knapsack: " << maxValue << endl;

    return 0;
}
