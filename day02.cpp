#include<bits/stdc++.h>
using namespace std;


// notes--> 
// 1)stable ---> relative order between equal elements will be maintained eg.b,i,m
// 2)unstable -> do not eg. s,q,
// 3) bubble--> adjecent
// 4)selection---> select smaller 
// 5) insertion----> insert at correct posi [sorted | unsorted]

// void bubbleSort(int arr[],int n){
//     for(int i = 0; i < n; i++){
//         bool flag = false;
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j]> arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 flag=true;
//             }
//         }
//         if(flag==false){
//             break;
//         }
//     }
// }


// void selectionSort(int arr[],int n){
//     for(int i = 0; i < n-1; i++){
//         int min_idx = i;
//         for(int j = i+1; j < n; j++){
//             if(arr[j]< arr[min_idx]){
//                 min_idx=j;    
//             }
//         }
//         swap(arr[i],arr[min_idx]);
//     }
// }


// void insertionSort(int arr[],int n){
//     for(int i = 1; i < n ; i++){
//         int key = arr[i];
//         int j = i - 1;
//         while(j >= 0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
// }

// void mergeTwoSortedArray(int a[], int b[], int m, int n){
//     int i = 0, j=0;
//     while(i<m && j<n){
//         if(a[i]<=b[j]){
//             cout<<a[i]<<" ";
//             i++;
//         }else{
//             cout<<b[j]<<" ";
//             j++;
//         }
//     }
//     while(i<m){
//         cout<<a[i]<<" ";
//         i++;
//     }
//     while(j<n){
//         cout<<b[i]<<" ";
//         j++;
//     }
// }

// void mergeSort(int a[],int n){
//     int mid = n/2;
// //this code will only display the sorted array form but didn't sort the array a
//     int i = 0, j=mid+1;
  
//     while(i<mid+1 && j<n){
//         if(a[i]<=a[j]){
//             cout<<a[i]<<" ";
//             i++;
//         }else{
//             cout<<a[j]<<" ";
//             j++;
//         }
//     }

//     while(i<mid+1){
//         cout<<a[i]<<" ";
//         i++;
//     }
//     while(j<n){
//         cout<<a[i]<<" ";
//         j++;
//     }
// }



// void merge(int arr[], int low, int mid, int high) {
//     int n1 = mid - low + 1;
//     int n2 = high - mid;
//     int left[n1], right[n2];
    
//     for (int i = 0; i < n1; i++) {
//         left[i] = arr[low + i];
//     }
    
//     for (int i = 0; i < n2; i++) {
//         right[i] = arr[mid + i + 1];
//     }

//     int i = 0, j = 0, k = low;
    
//     while (i < n1 && j < n2) {
//         if (left[i] <= right[j]) {
//             arr[k] = left[i];
//             i++;
//         } else {
//             arr[k] = right[j];
//             j++;
//         }
//         k++;
//     }
    
//     while (i < n1) {
//         arr[k] = left[i];
//         i++;
//         k++;
//     }
    
//     while (j < n2) {
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// }

// void mergeSorting(int arr[], int l, int r) {
//     if (r > l) {
//         int mid = l + (r - l) / 2;
//         mergeSorting(arr, l, mid);
//         mergeSorting(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//     }
// }

// void intersection(int a[], int m, int b[], int n){
//     for (int i = 0; i < m; i++){
//         if(i>0 && a[i]==a[i-1]){
//             continue;
//         }
//         for (int j = 0; j < n; j++){
//             if(a[i]==b[j]){
//                 cout<<a[i]<<" ";
//                 break;
//             }
//         }   
//     }   
// }

// void intersection(int a[], int m, int b[], int n){
//     int i = 0; j = 0;
//     while (i < m && j < n){
//         if(i>0 && a[i]==a[i-1]){
//             i++;
//             continue;
//         }
//         if(a[i]<a[j]) i++;
//         else if(a[i]>a[j]) j++;

//         else{
//             cout<<a[i]<<" ";
//             i++;
//             j++;
//         }
//     }
    
// } 



// void printUnion(int a[], int m, int b[], int n) {
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (i > 0 && a[i] == a[i - 1]) { 
//             i++; 
//             continue; 
//         }
//         if (j > 0 && b[j] == b[j - 1]) { 
//             j++; 
//             continue; 
//         }

//         if (a[i] < b[j]) {
//             cout << a[i] << " ";
//             i++;
//         } else if (a[i] > b[j]) {
//             cout << b[j] << " ";
//             j++;
//         } else {
//             cout << a[i] << " ";
//             i++;
//             j++;
//         }
//     }

//     while (i < m) {
//         if (i > 0 && a[i] != a[i - 1]) {
//             cout << a[i] << " ";
//         }
//         i++;
//     }

//     while (j < n) {
//         if (j > 0 && b[j] != b[j - 1]) {
//             cout << b[j] << " ";
//         }
//         j++;
//     }
// }

// int countinverse(int arr[], int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n; j++){
//             if(arr[i]>arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int mergecount(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int left[n1], right[n2];
    
//     for (int i = 0; i < n1; i++) {
//         left[i] = arr[l + i];
//     }
    
//     for (int i = 0; i < n2; i++) {
//         right[i] = arr[m + 1 + i];
//     }

//     int i = 0, j = 0, count = 0, k = l;
    
//     while (i < n1 && j < n2) {
//         if (left[i] <= right[j]) {
//             arr[k] = left[i];
//             i++;
//         } else {
//             arr[k] = right[j];
//             count += n1 - i;
//             j++;
//         }
//         k++;
//     }
    
//     while (i < n1) {
//         arr[k] = left[i];
//         i++;
//         k++;
//     }
    
//     while (j < n2) {
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
    
//     return count;
// }

// int countinverse(int arr[], int l, int r) {
//     int count = 0;
//     if (r > l) {
//         int m = l + (r - l) / 2;
//         count += countinverse(arr, l, m);
//         count += countinverse(arr, m + 1, r);
//         count += mergecount(arr, l, m, r);
//     }
//     return count;
// }

// ---Naive partition---
// void partition(int arr[], int l, int h, int p) {
//     int temp[h - l + 1], idx = 0;
//     for (int i = l; i <= h; i++) {
//         if (arr[i] <= arr[p]) {
//             temp[idx] = arr[i];
//             idx++;
//         }
//     }
//     for (int i = l; i <= h; i++) {
//         if (arr[i] > arr[p]) {
//             temp[idx] = arr[i];
//             idx++;
//         }
//     }
//     for (int i = l; i <= h; i++) {
//         arr[i] = temp[i - l];
//     }
// }

// ---lomuto partition---consider last element as pivot --->
//  in this partition pivot element got placed at right position that why it's quick sort is from o to p-1

// int lpartition(int arr[], int l, int r) {
//     int pivot = arr[r-1];
//     int j = l - 1;  
//     for (int i = l; i < r; i++) {
//         if (arr[i] < pivot) {
//             j++;
//             swap(arr[i] , arr[j]);
//         }
//     }
//     swap(arr[j+1] , pivot);
//     return j+1;
// }

// ---hoare's partition method---consider first element as pivot ---> 
// but in this partition pivot may or may not be place at right position that why it's quick sort is 0 to pivot

// int hpartition(int arr[] , int l , int h){
//     int pivot = arr[l];
//     int i = l - 1 , j = h + 1;
//     while (true) {
//         do{
//             i++;
//         }while (arr[i] < pivot)
//         do{
//             j--;
//         }while (arr[i] > pivot)
//         if (i >= j) return j;
//         swap(arr[i], arr[j]);
//     } 
// }

//quick sort
// void quickSort(int arr[], int l, int h){
//     if(h > l){
//         int p = lpartition(arr, l, h);
//         quickSort(arr , l , p-1);
//         quickSort(arr , p + 1 , h);
//     }
// }

// int  minimum_difference(vector<int>nums){
//    	sort(nums.begin(),nums.end());
//    	int ans = INT_MAX;
//    	for(int i = 1; i < nums.size(); i++){
//    	    ans=min(nums[i]-nums[i-1],ans);
//    	}
//    	return ans;
// }    

// void cycleSortDistinct(int arr[], int n){
//     for(int cs=0;cs<n;cs++){
//         int item=arr[cs];
//         int pos=cs;
//         for(int i=cs+1;i<n;i++){
//             if(arr[i]<item){
//                 pos++;
//             }
//         }
//         swap(item,arr[pos]);
//         while(pos!=cs){
//             pos=cs;
//             for(int i=cs+1;i<n;i++){
//             if(arr[i]<item){
//                 pos++;
//             }
//         }
//         swap(item,arr[pos]);
//         }
//     }
// }


// void heapify(int arr[], int n, int i)  {

//   int largest = i;
//   int left = 2*i + 1;
//   int right = 2*i + 2;
  
//   if(left<n && arr[left]>arr[largest]) largest = left;
//   if(right<n && arr[right]>arr[largest]) largest = right;
  
//   if(largest != i){
//       swap(arr[largest],arr[i]);
//       heapify(arr,n,largest);
//   }
  
// }



// void buildHeap(int arr[], int n) { 
//     for(int i=n/2-1;i>=0;i--){
//     heapify(arr,n,i);
//     }
// }

    
// void heapSort(int arr[], int n){
//     buildHeap(arr,n);
//     for(int i=n-1; i>0; i--){
//         swap(arr[0],arr[i]);
//         heapify(arr,i,0);
//     }
// }

//Naive solution

// void countingSort(int arr[], int n, int k){
//     int count[k];
//     for(int i=0;i<k;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     int idx=0;
//     for(int i=0;i<k;i++){
//         for(int j=0;j<count[i];j++){
//             arr[idx]=i;
//             idx++;
//         }

//     }

// }

// void countingSort(int arr[], int n, int k){
//     int count[k];
//     for(int i=0;i<k;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     for(int i=1;i<k;i++){
//         count[i]=count[i-1]+count[i];
//     }
//     int output[n];
//     for(int i=n-1;i>=0;i--){
//         output[count[arr[i]]-1]=arr[i];
//         count[arr[i]]--;
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=output[i];
//     }
// }
// ----------------------------------------Matrix----------------------------------

//  void snakeTraversal(const vector<vector<int>>& arr, int r ,int c){
//     for(int i=0; i<r;i++){
//         if(i%2==0){
//             for(int j=0; j<c;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }else{
//             for(int j=c-1; j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//  }


// void boundaryTraversal(const vector<vector<int>>& arr, int r, int c) {
//     if (r == 1) {
//         for (int i = 0; i < c; i++) {
//             cout << arr[0][i] << " ";
//         }
//     }
//     else if (c == 1) {
//         for (int i = 0; i < r; i++) {
//             cout << arr[i][0] << " ";
//         }
//     }
//     else {
//         for (int i = 0; i < c; i++) {
//             cout << arr[0][i] << " ";
//         }
//         for (int i = 1; i < r; i++) {
//             cout << arr[i][c - 1] << " ";
//         }
//         for (int i = c - 2; i >= 0; i--) {
//             cout << arr[r - 1][i] << " ";
//         }
//         for (int i = r - 2; i > 0; i--) {
//             cout << arr[i][0] << " ";
//         }
//     }
// }

// void transpose(vector<vector<int>>& arr, int r, int c) {
//     vector<vector<int>> temp(c, vector<int>(r));
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             temp[i][j] = arr[j][i];
//         }
//     }
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             arr[i][j] = temp[i][j];
//         }
//     }
// }
//notes: 1column-->1row,2column-->2row,3column-->3row ans so on...

// void transpose(vector<vector<int>>& arr, int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = i+1; j < c; j++) {
//             swap(arr[i][j] , arr[j][i]);
//         }
//     }
// }

// void rotate90(vector<vector<int>>& arr, int r, int c) {
//     vector<vector<int>> temp(c, vector<int>(r));
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             temp[i][j] = arr[j][c-i-1];
//         }
//     }
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             arr[i][j] = temp[i][j];
//         }
//     }
// }

//notes: rotate90=> arr-->transpose-->reverse column or reverse row

// void rotate90(vector<vector<int>>& arr, int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = i+1; j < c; j++) {
//             swap(arr[i][j] , arr[j][i]);
//         }
//     }
//     // for (int i = 0; i < r/2; i++) {
//     //     for (int j = 0; j < c; j++) {
//     //         swap(arr[i][j] , arr[c-i-1][j]);   // reverse row
//     //     }
//     // }
//     for (int j = 0; j < c; j++) {
//         int low = 0, high = r-1;
//         while(low < high){
//             swap(arr[low][j],arr[high][j]);  // reverse column 
//             low++;
//             high--;
//         } 
//     }
// }

// ----------------------------------------Hashing-----------------------------------------
// implementation of direct address table 
    
// implementation of chaining
// struct MyHash
// {
//     int BUCKET;
//     list<int>* table;
//     MyHash(int b){
//         BUCKET=b;
//         table=new list<int>[b];
//     }
//     void insert(int key){
//         int i=key%BUCKET;
//         table[i].push_back(key);
//     }
//     void remove(int key){
//         int i=key%BUCKET;
//         table[i].remove(key);
//     }
//     bool search(int key){
//         int i=key%BUCKET;
//         for(auto x : table[i]){
//             if(x==key) return true;
//             return false;
//         }
//     }
    
// };

// implementation of open addressing 
// note: how to handle the cases when -1 and -2 are input key mean how hash function library implemented(used pointer and pointer --> nUll)
// quadratic probing gaurantee to work when load factor(alpha<0.5 means hash table size must double the key insert into it ans hash table )
// double hashing uses tow hash function first for normal ans second one for when collosion occure 
// hash(key,i)=(h1(key)+ih2(key))%m
// void doubleHashingInsert(key){
//     if(table if full){
//         return error;
//         probe=h1(key);
//         offset=h2(key);
//         while(table[probe] is occupied){
//             probe=(probe+offset)%m;
//         }
//         table[probe]=m;
//     }
// }

// struct Myhash{
//     int *arr;
//     int cap,size;

//     Myhash(int c){
//         cap=c;
//         size=0;
//         for(int i=0;i<cap;i++){
//             arr[i]=-1;
//         }
//     }

//     int hash(int key){
//         return key%cap;
//     }

//     bool search(int key){
//         int h = hash(key);
//         int i = h;
//         while(i!=-1){
//             if(arr[i]==key) return true;
//             i=(i+1)%cap;
//             if(i==h) return false;
//         }
//         return false;    
//     }

//     bool insert(int key){
//         if(size==cap)return false;
//         int h=hash(key);
//         int i=h;
//         while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
//             i=(i+1)%cap;
//             if(arr[i]==key) return false;
//             else{
//                 arr[i]=key;
//                 size++; 
//                 return true;
//             }
//         }


//     }
//     bool erase(int key){
//         int h = hash(key);
//         int i = h;
//         while(i!=-1){
//             if(arr[i]==key) {
//                 arr[i]=-2;
//                 return true;
//             }
//             i=(i+1)%cap;
//             if(i==h) return false;
//         }
//         return false;    
//     }
// }

// int countDistinct(vector<int>& a){
//     unordered_set<int> s(a.begin(),a.end());
//     return s.size();
// }

// void printFreq(vector<int>& a){
//     unordered_map<int,int> m;
//     for(int i=0;i<a.size();i++){
//         m[a[i]]++;
//     }
//     for(auto e:m){
//         cout<<e.first<< " "<<e.second<<endl;
//     }
// }

// void intersectionOfTwoArray(vector<int>& arr,vector<int>& brr){
//     unordered_set<int> s(brr.begin(),brr.end());
//     for(auto x:arr){
//         if(s.find(x)!=s.end())
//             cout<<x<<" ";        
//     }
// }

// unordered_set<int> unionOfTwoArray(vector<int>& arr,vector<int>& brr){
//     unordered_set<int>s(arr.begin(),arr.end());
//     for(int x:brr){
//         s.insert(x);
//     }
//     return s;
// }

// bool pairSum(vector<int>& arr, int sum){
//     unordered_set<int>s ;
//     for(int i=0;i<arr.size();i++){
//         if(s.find(sum-arr[i])!=s.end()){
//             return true;
//         }else{
//             s.insert(arr[i]);
//         }
//     }
//     return false;
// }

// bool subArrsum0(vector<int>& a){
//     unordered_set<int> s;
//     int pre=0;
//     for(int i=0;i<a.size();i++){
//         pre+=a[i];
//         if(s.find(pre)!=s.end()){
//             return true;
//         }
//         if (pre==0){
//             return true;
//         }
//         s.insert(pre);    
//     }
//     return false;
// }

// bool subArrsumk(vector<int>& a,int k){
//     unordered_set<int> s;
//     int pre=0,count=0;
//     for(int i=0;i<a.size();i++){
//         pre+=a[i];
//         if(s.find(pre-k)!=s.end()){
//             return true;
//         }
//         if (pre==k){
//             return true;
//         }
//         s.insert(pre);    
//     }
//     return count;
// }

// int longestSubArrWithGivenSum(vector<int>& a, int k) {
//     int pre = 0, curr = 0;
//     unordered_map<int, int> m;
//     for (int i = 0; i < a.size(); i++) {
//         pre += a[i];  
//         if (pre == k) {curr = i + 1;}
//         if (m.find(pre - k) != m.end()) {curr = max(curr, i - m[pre - k]);}
//         if (m.find(pre) == m.end()) {m[pre] = i;}
//     }
//     return curr;
// }

// int longestSubArrEqual0s1s(vector<int>& a){
//     for (int i = 0; i < a.size(); i++){
//         a[i]=(a[i]==0)?-1:1;
//     }
//     int pre = 0, curr = 0;
//     unordered_map<int, int> m;
//     for (int i = 0; i < a.size(); i++){
//         pre+=a[i];
//         if (pre==0){
//             curr=i+1;
//         }
//         if(m.find(pre)!=m.end()){
//             if(curr < i-m[pre]){
//                 curr=i-m[pre];
//             }
//         }else{
//             m[pre]=i;
//         }
        
//     }
//     return curr;
    
// }

// int longestSub2ArrSumEqual0s1s(vector<int>& a,vector<int>& b){
//     vector<int> temp;
//     for (int i = 0; i < a.size(); i++){
//         temp[i]=a[i]-b[i];
//     }
//     int pre = 0, curr = 0;
//     unordered_map<int, int> m;
//     for (int i = 0; i < a.size(); i++){
//         pre+=a[i];
//         if (pre==0){
//             curr=i+1;
//         }
//         if(m.find(pre)!=m.end()){
//             curr=max(curr,i-m[pre]);
//         }else{
//             m[pre]=i;
//         }        
//     }
//     return curr; 
// }

// int longestconseSubSequence(vector<int>& arr){
//     int count=1,res=0;
//     unordered_set<int> s(arr.begin(),arr.end());
//     for(auto x:s){
//         while(s.find(x+count)!=s.end()){
//             count++;
//         }
//         res=max(res,count);
//     }
//     return res;
// }

// void disEleEveWindow(vector<int>& arr,int k){
//     for(int i=0;i<n-k;i++){
//         unordered_set<int> s(arr.begin()+i,arr.end()-k+1+i);
//         cout<<s.size()<<" ";
//         s.clear();
//     }
// }


// void printDistinct(int arr[], int n, int k)
// {
//     map<int, int> m; 
//     for (int i = 0; i < k; i++) { 
//         m[arr[i]] += 1; 
//     }  
//     cout << m.size() << " ";   
//     for (int i = k; i < n; i++) { 
        
//         m[arr[i - k]] -= 1;
        
//         if (m[arr[i - k]] == 0) { 
//             m.erase(arr[i-k]); 
//         }   
//         m[arr[i]] += 1; 
   
//         cout << m.size() << " "; 
//     }    
// }


// void printNByK(int arr[], int n, int k)
// {
//     unordered_map<int,int> m;
//     for(int i=0;i<n;i++){
//         if(m.find(arr[i])!=m.end())
//             m[arr[i]]++;
//         else if(m.size()<k-1)
//             m[arr[i]]=1;
//         else
//             for(auto x:m){
//                 x.second--;
//                 if(x.second==0)
//                     m.erase(x.first);}
//     }
//     for(auto x:m){
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(x.first==arr[i])
//                 count++;
        
//        }
//         if(count>n/k)
//             cout<<x.first<<" ";
//     }
// }




int main() {
    // vector<int> arr = {4};  
    // // vector<int> brr = {1,0,1,0,1,0,1,1};  
    // int result = longestconseSubSequence(arr);
    // cout << result << endl;

    return 0;
    // vector<vector<int>> arr = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };

    // cout << "Original Array: " << endl;
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // rotate90(arr, r, c);

    // cout << "Transpose: " << endl;
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

