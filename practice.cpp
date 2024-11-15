#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    int arr[]={10,20,30,40,3,2,1,50,0}
    int count =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<arr[i+1]){
            if(arr[i+1]>=temp){
                return count;
            }else{
                count++;
            }
        }
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            count++;
        }

    }
    return count;   

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
