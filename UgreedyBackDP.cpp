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

//job sequencing
static bool MyCmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first; 
}

vector<int> JobSequencing(vector<int> &id, vector<int> &deadline, vector<int> &profit) {
    int n = id.size();
    vector<pair<int, int>> p;  
    for (int i = 0; i < n; i++) {
        p.push_back({profit[i], deadline[i]});
    }
    sort(p.begin(), p.end(), MyCmp); 
    
    int maxd = *max_element(deadline.begin(), deadline.end());
    vector<int> temp(maxd + 1, -1);  
    int jobCount = 0, maxProfit = 0;
    for (int i = 0; i < n; i++) {
        for (int j = min(maxd, p[i].second); j > 0; j--) {  
            if (temp[j] == -1) {  
                temp[j] = p[i].first;  
                jobCount++;
                maxProfit += p[i].first;
                break;
            }
        }
    }
    return {jobCount, maxProfit};
}

int main() {
    vector<int> id = {1, 2, 3, 4, 5};
    vector<int> deadline = {2, 1, 2, 1, 3};
    vector<int> profit = {100, 50, 10, 20, 30};
    
    vector<int> result = JobSequencing(id, deadline, profit);
    cout << "Jobs Done: " << result[0] << ", Max Profit: " << result[1] << endl;
    
    return 0;
}
