 #include<iostream>
 #include <algorithm>  //for std lib
 #include <cmath>      // for maths function
 #include <vector> 
 #include <bits/stdc++.h>

 using namespace std;

//  int countDigit(int x){
//     int count=0;
//     while(x>0){
//         x=x/10;
//         count++;
//     }
//     return count;
//  }
 
// bool palindromeNumber(int n){
//     int rev=0;
//     int x=n;
//     while (x!=0){
//         rev=rev*10+(x%10);
//         x=x/10;
//     }
//         return (rev==n);
// }

// int factorial(int x){
//     int fact=1;
//     for(int i=2; i<=x; i++){
//         fact= fact*i;
//     }
//     return fact;

// int rFactorial(int x){
//     if (x==0)
//        return 1;
//     return x*rFactorial(x-1);

// }

// int trailingZero(int x){
//     int fact=1;
//     for(int i=2; i<=x; i++){
//         fact= fact*i;
//     }
//     int k=fact;
//     int count=0;
//     while (k%10==0){
//         count++;
//         k=k/10;
//     }
//     return count;
// }


// note:if x==20 then overflow the int datatype
// 1*2*3*4*(5)*6*7*8*9*(10)....*(25)...*(125)...*n
// total number of prime 5 factor
//trailing zero count = n/5 + n/25 + n/125....


// int trailingZero(int x){
//     int trail=0;
//     for (int i=5; i<=x; i=i*5){
//         trail = trail + (x/i);
//     }
//     return trail;
// }

// int gcd(int a, int b){
//     int n = min(a,b);
//     while(n>0){
//         if (a%n==0 && b%n==0){
//             break;
//         }
//         n--;
//     }
//     return n;
// } 

// EUCLIDEAN METHOD 
// int gcd(int a, int b){
//     while (a!=b){
//         if (a>b)
//          a=a-b;
//         else
//          b=b-a;
//     }
//     return a; 
// }

//optimized solution 
// int gcd(int a, int b){
//     if(b==0)
//     return a; 
//     else 
//     return gcd(b,a%b);
// }

// int lcm(int a, int b){
//     int x=max(a,b);
//     for(int i=x; i<=(a*b); i++){
//         if(i%a==0 && i%b==0){return i;}  
//     }
// }

// Efficient solution 
// int lcm(int a, int b){
//     return (a*b)/gcd(a,b);
// }

// bool isPrime(int x){
//     if (x==1)
//         return false;
//         for (int i=2; i*i<x; i++){
//             if(x % i == 0){
//                 return false;
                
//             }
//         }
//         return true;
  
// }
// [2] (3) [4] ...5... [(6)] ..7.. [8] (9) [10] ...11... [(12)] ..13.. [14] (15) [16] ...17... [(18)] ..19.. [20] (21)
//x%2==0 means 4,6,8,10,12,14,16,18,20
//x%3==0 means 6.9,12,15,18,21
//5,7,11,13,17,19check logic

// bool isPrime(int x){
//     if(x==1) return false;
//     if(x==2 || x==3) return true;
//     if(x%2==0 || x%3==0) return false;
//     for(int i=5; i*i<=x; i=i+6){
//         if(x%i==0 || x%(i+2)==0) return false;
//     }
//     return true;
// } 
// ----NAIRE SOLUTION-----
// void primeFactor(int x){
//     for(int i=2; i<x; i++){
//         if(isPrime(i)){
//             int n=i;
//             while(x%n==0){
//                 cout<<i<<" ";
//                 n=n*i;
//             }
//         }
//     }
// }

//efficient solution 
// void primeFactor(int n){
//     if(n<=1) return ;
//     for(int i=2;i*i<=n;i++){
//         while(n%i==0){
//             cout<<i;
//             n=n/i;
//         }
//     }
//     if(n>1)
//     cout<<n;
// }

//further optimize
// void primeFactor(int n){
//     if(n<=1) return;
//     while(n%2==0){
//         cout<<2;
//         n=n/2;
//     }
//     while(n%3==0){
//         cout<<3;
//         n=n/3;
//     }
//     for(int i=5; i*i<=n; i=i+6){
//         while(n%i==0){
//             cout<<i;
//             n=n/i;
//         }
//         while(n%(i+2)==0){
//             cout<<i+2;
//             n=n/i+2;
//         }
//     }
//     if(n>3){
//         cout<<n;
//     }
// }

// void printDivisors(int n){
//     for(int i=1; i<=n; i++){
//         if (n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// void printDivisors(int n){
//         for(int i=1; i*i<=n; i++){
//         if (n%i==0){
//             cout<<i<<" ";
//             if(i!=n/i){
//                 cout<<n/i;
//             }
//         }
//     }
    
// }

// void printDivisors(int n){
//         for(int i=1; i*i<n; i++){
//         if (n%i==0){
//             cout<<i<<" ";
//         }
//         }
//         for(int i=sqrt(n); i>=1; i-- ){
//         if (n%i==0){
//             cout<<n/i<<" ";
//         }
//         }
// }

// ----sieve of Eratosthenes----

// void printPrime(int n){
//     for (int i=2; i<=n; i++){
//         if (isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// void printPrime(int n){
//     vector<bool>isPrimee(n+1,true);
//     for (int i=2; i<=n; i++){
//         if (isPrime(i)){
//             cout<<i<<" ";
//             for(int j=i*i; j<=n; j++){
//                 isPrimee[j]=false;
//             }
//         }
//     }
// }
//  O(n log(log(n)))

// int power(int x, int n){
//     int res = 1;
//     for (int i=0; i<n; i++){
//         res = res*x;
//     }
//     return res; 

// }

// int power(int x, int n){
//     int res= 1;
//     while (n > 0){
//         if(n%2!=0){ // (n&1)--> n odd or not, last bit 1
//             res= res*x;
//         x= x*x;
//         n= n/2; // n>>1 shift operator - is used to divide by 2 
//         }
//         return res; 
//     }

// }


// ------------------------------Bitwise Operation ----------------------------

// range of number - [-2^n-1 to (2^n-1) -1] n --> no of bits
// direct formula = 2^n -x
  
// void iskthset(int n, int k){
    
//         n=n>>k-1;                    //if we are using left shift in place of it then the code is 
//         if ((n&1)!=0){               //
//             cout<<"yes";
//         }else{
//             cout<<"no";
//         }
// }

// int coutSetBit(int n){
//     int count= 0;
//     while(n>0){
//         if(n&1!=0){
//            count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int coutSetBit(int n){
//     int count= 0;
//     while(n>0){
//         n=n&(n-1);
//         count++;
//     }
//     return count;
// }

// int tbl[256];
// void initialize(){
//     tbl[0]=0;
//     for(int i=0; i<256; i++){
//         tbl[i]= tbl[i&(i-1)]+1;
//     }
// }
// int coutSetBit(int n){
//     return tbl[n&255]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)];
// }

// bool isPow2(int n) {
//     if (n == 0) {
//         return false;
//     }
//     return (n & (n - 1)) == 0;
// }


// int oddOccuring1(const vector<int>& vec) {
//     int ans = vec[0];
//     for (int i = 1; i < vec.size(); i++) {
//         ans ^= vec[i];
//     }
//     return ans;
// }

// GG-------------******---------------GG

// void oddOccuring2(const vector<int>& vec) {
//     int a = 0;
//     for (int num : vec) {
//         a ^= num;
//     }
    
//     // Find the rightmost set bit in a                     
//     // int k = (a & (~(a - 1)));
    
//     int n1 = 0, n2 = 0;
//     for (int num : vec) {
//         if ((num & 1) != 0) {    //1-->k if k consider  in code
//             n1 ^= num;
//         } else {
//             n2 ^= num;
//         }
//     }
    
//     cout << "Odd occurring numbers are: " << n1 << " " << n2 << endl;
    
// }

// void printPowerSet(string s){
//     int n= s.length();
//     int pSize= (1<<n); // claculate 2^n
//     for(int i=0; i<pSize; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if ((i & (1<<j)) != 0)
//                 cout<<s[j];
//         }
//         cout<<endl; 
//     }
// }

// -------------------------------Recursion-----------------------------

// void fun(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     fun(n-1);
//     cout<<n<<endl;
// }

// calculate the log(n) base 2
// void fun(int n){
//     if(n==1)
//     return 0;
//     else 
//     return 1+fun(n/2);
// }

// decimal --> binary using recursion
// void fun(int n){
//     if (n==0)
//     return;
//     fun(n/2);
//     cout<<n%2;
// }

// print n-->1 number
// void fun(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     fun(n-1);
// }

// Print 1-->n
// void fun (int n){
//     if(n==0)
//     return;
//     fun(n-1);
//     cout<<n<<endl;
    
// }

// factorial(non tail recursive)
// int fac(int n){
//     if(n==0 || n==1)
//         return 1;
//     return n*fun(n-1);

// }
// factorial(tail recursive)
// int fac(int n,int k ){
//     if(n==0 || n==1)
//         return k;
//     return fun(n-1,k*n);

// }

// nth fibonacci number
// int fibo(int n){
//     if(n==0) return 0;    //if(n<=1)
//     if(n==1) return 1;   //return n ;
//     return fibo(n-1)+fibo(n-2);
// } 

// sum of natural number =n*(n+1)/2
// int sum(int n){
//     if(n==1) return k;
//     return sum(n-1,k+n);
//     // return n*(n+1)/2;
// }

//palindrom check
// bool palindromCheck(string &str, int s, int e){
//     if (s>=e) return true; //start cross end 
//     return (str[s]==str[e])&& palindromCheck(str,start+1,end-1)

// }

// sum of digit
// int getSum(int n){
//     if(n<=9) return n;
//     return getSum(n/10)+ (n%10);
// }

// Rope cutting problem
// int maxPieces(int n, int a, int b, int c){
//     if (n == 0) return 0;
//     if (n < 0) return -1;

//     int res= max(maxPieces(n-a,a,b,c), 
//                  maxPieces(n-b,a,b,c),             / 
//                  maxPieces(n-c,a,b,c));

//     if(res == -1) return -1;
//     return res+1;
// }

// void subSet(string s,string curr,int i){       //        "ab"
//     if(i==s.lengt()){                          //      /      \
//         cout<<curr<<" ";                       //      {}      "a"
//         return;                                //     /  \     / \ 
//     }                                          //   {} "b"  "a" "ab"
//     subSet(s,curr,i+1); 
//     subSet(s,curr+s[i],i+1); 
// }

// tower of Hanoi problem --> 1.only one disc moves at a time 
//                            2.on longer disc above smaller
//                            3.only the top disc of a tower can be moved
// void toH(int n, char A, char B, char C){
//     if(n==1){
//         cout<<"Move 1 from "<<A<<" to "<<C<<endl;
//         return;
//     }
//     toH(n-1,A,C,B);
//     cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;
//     toH(n-1,B,A,C);
// }

// josephus problem --->1.Start with the first person (index 1).
//                      2.Skip 2 people (i.e., eliminate the 3rd person).
//                      3.Continue around the circle, skipping 2 people each time, 
//                      eliminating the 3rd, until only one person remains.

// To find the position of the last remaining person?

// int jos(int n,int k){
//     if(n==1){
//         return 0;
//     }else{
//         return (jos(n-1,k)+k);
//     }

    
// }

// to print the all subsequence of array  
// famous method - powes set but over here we use recursion 

// void subSet(int a[], vector<int>& curr, int i, int n) {
//     if (i == n) {
//         cout << "{ ";
//         for (int j = 0; j < curr.size(); j++) {
//             cout << curr[j] << " ";
//         }
//         cout << "} ";
//         return;
//     }
  
//     subSet(a, curr, i + 1, n);  
//     curr.push_back(a[i]);
//     subSet(a, curr, i + 1, n);
//     curr.pop_back();
// }

// void subSet(int a[], vector<int>& curr, int i, int n, int s, int sum) {
//     if (i == n) {
//         if (s == sum) {
//             cout << "{ ";
//             for (int j = 0; j < curr.size(); j++) {
//                 cout << curr[j] << " ";
//             }
//             cout << "} ";
//         }
//         return;
//     }

//     subSet(a, curr, i + 1, n, s, sum);
//     curr.push_back(a[i]);
//     subSet(a, curr, i + 1, n, s + a[i], sum);
//     curr.pop_back();
// }


// to find subset sum
// int subSum(int a[],int n,int sum){
//     if(n==0){
//         return (sum==0)?1:0;
//     }
//     return subSum(a,n-1,sum)+subSum( a,n-1,sum-a[n-1]);
// }


// to print all permutation
// void permute(string s, int i){
//     if(i==s.length()-1){
//         cout<<s<<" ";
//         return;
//     }
//     for(int j=i; j<s.length(); j++){
//         swap(s[i],s[j]);
//         permute(s,i+1);
//         swap(s[j],s[i]);
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void fun(int arr[], int n, int i, vector<int> &temp) {
//     // Base case
//     if (i == n) {
//         if (temp.size() == 0) {
//             cout << "{}";
//         } else {
//             for (auto &it : temp) {
//                 cout << it << " ";
//             }
//         }
//         cout << endl;
//         return;
//     }
//     // Doesn't pick the particular index into subsequence
//     fun(arr, n, i + 1, temp);

//     // Pick the particular index into subsequence
//     temp.push_back(arr[i]);
//     fun(arr, n, i + 1, temp);
//     temp.pop_back(); 
// }

// int main() {
//     int n = 3;
//     int arr[] = {3, 2, 1};
//     vector<int> temp;
//     fun(arr, n, 0, temp);
//     return 0;
// }


// print subsequence whoes sum is equal to sum 
// void fun(int ind, vector<int>& temp, int s, int sum,int arr[],int n){
//     if(ind==n){
//         if(s==sum){
//             for(auto& it : temp){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return ;
//     }
//     temp.push_back(arr[ind]);
//     s+=arr[ind];
//     fun(ind+1,temp,s,sum,arr,n);
//     s-=arr[ind];
//     temp.pop_back();
    
//     fun(ind+1,temp,s,sum,arr,n);  
    
// }

// int main(){
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int>temp;
    
//     fun(0,temp,0,sum,arr,n);
//     return 0;

// technique to print one ans (print only first sequence whose sum = sum )
bool fun(int ind, vector<int>& temp, int s, int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto& it : temp){
                cout<<it<<" ";
            }
            return true;
            cout<<endl;
        }else
        return false ;
    }
    temp.push_back(arr[ind]);
    s+=arr[ind];
    if(fun(ind+1,temp,s,sum,arr,n)) return true;
    s-=arr[ind];
    temp.pop_back();
    
    if(fun(ind+1,temp,s,sum,arr,n)) return true;

    return false;  
    
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>temp;
    
    fun(0,temp,0,sum,arr,n);
    return 0;
}

// -----------------------------------------------------------Array--------------------------------------------------------------------------------


// int search(vector<int>& a, int s) {
//     for (int i = 0; i < a.size(); i++) {
//         if (a[i] == s) {
//             return a[i]; 
//         }
//     }
//     return -1; 
// }

//  int insert(vector<int>& a,int n,int p){
//     for (int i = 0; i < a.size(); i++) {
//         if(i==p){
//             a.insert(n);
//         }
//     }
//     return a;
//  }

//  int insert(vector<int>& a,int n,int p){
//     for (int i = a.size(); i <= (p-1); i--) {
//         a[i+1]=a[i];
//         }
//     a[p-1]=n;

//     return n+1;
//  }

// int deleteEle(vector<int>& a,int x){
//     int n=a.size();
//     int i=0;
//     for (i = 0; i < n; i++) {
//         if(a[i]==x){
//             break;
//         }
//     }
//     if(i==n)
//       return n;

//     for(int j=i;j<n-1;j++){
//         a[j]=a[j+1];
//     return n-1;
//     }
// }

// int getLargest(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         bool flag=true;
//         for(int j=i;j<a.size();j++){
//             if(a[j]>a[i]){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true){
//             return i;
//         }
//     }
//     return -1;
// }

// int secondLargest(vector<int>& a){
//     int res=-1;
//     int largest=0; 
//     for(int i=1;i<a.size();i++){
//         if(a[i]>a[largest]){
//             res=largest;
//             largest=i;
//         } 
//         else if(a[i]!=a[largest]){
//             if(res==-1 || a[i]>a[res]){
//                 res=i;
//             }
//         }
//     }    
//     return res;
// }

// bool isSorted(vector<int>& a){
    
//     for (int i= 0;i<a.size();i++){
//         if(a[i]>a[i+1]){
//             return false;
//         }
//     }
//     return true ;
// }

// vector<int> reverse(vector<int>& a){
//     int i=0;
//     int j=a.size()-1;
//     while(i<j){
//         int temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i++;
//         j--;
//     }
//     return a;
// }

// int rmvDup(vector<int>& a){
//     int res=1;
//     for(int i=1;i<a.size();i++){
//         if(a[i]!=a[res-1]){
//             a[res]=a[i];
//             res++;
//         }
//     }
//     return res;
// }

// void pushZeroToEnd(vector<int>& a){
//     int res=0;
//     for(int i=0;i<a.size();i++){
//         if(a[i]!=0){
//             swap(a[res],a[i]);
//             res++;
//         }
//     }

// }

// void leftRotation(vector<int>& a){
//     int n=a.size();
//     int b=a[0];
//     for(int i=0;i<n;i++){
//         a[i-1]=a[i];
//     }
//     a[n-1]=b;
// }

// void leftRotationByD(vector<int>& a,int d){
//     int n=a.size();

//     for(int i=0;i<d;i++){
//         leftRotation(a);     //combine solutino leftrotation + leftRotationByD
//     }
// }

// void leftRotationByD(vector<int>& a,int d){
//     int n = a.size();
//     int temp[d];
//     for(int i = 0; i < d; i++){
//         temp[i]=a[i];
//     }
//     for(int i = d; i < n; i++){
//         a[i-d]=a[i];
//     }    
//     for(int i = 0; i < d; i++){
//         a[n-d+i]=temp[i];
//     }
// }

// int reverse(vector<int>& a, int low , int high){
//     while(low<high){
//         swap(a[low],a[high]);
//         low++;
//         high--;
//     }
// }
// void leftRotationByD(vector<int>& a,int d){
//     int n=a.size();
//     reverse(a,0,d-1);
//     reverse(a,d,n-1);
//     reverse(a,0,n-1);
// }

// void leader(vector<int>& a){    // leader- no greater or equals to the value on its right side
//     int n = a.size();
//     int curr_leader = a[n-1];
//     cout<< curr_leader;
//     for(int i = n-2; i >= 0; i--){
//         if(a[i]>a[curr_leader]){
//             curr_leader=a[i];
//             cout<<curr_leader;
//         }
//     }
// }

// int maxDiff(vector<int>& a){                       // maximum value of arr[j]-arr[i] such that j>i
//     int res=a[1]-a[0];
//     for(int i = 0; i < a.size(); i++){
//         for(int j = i+1; j < a.size()-1; j++){
//             res = max(res,a[j]-a[i]);
//         }
//     }
//     return res;
// }

// int maxDiff(vector<int>& a){
//     int res=a[1]-a[0];
//     int min_value=a[0];
//     for(int i = 1; i < a.size(); i++){          
//             res = max(res,a[i]-min_value);
//             min_value=min(min_value,a[i]);
//     }
//     return res;
// }

// void printFreq(vector<int>& a){
//     int count=1;
//     for(int i=0; i<a.size();i=i+count){
//         count=1;
//         for(int j=i+1; j<a.size();j++){
//             if(a[i]==a[j]){
//                 count++;
//             }break;
//         }
//         cout<<count<<endl;
//     }
// }

// void printFreq(vector<int>& a) {
//     int n = a.size(),freq = 1,i = 1;

//     while (i < n) {
//         while (i < n && a[i] == a[i - 1]) {
//             freq++;
//             i++;
//         }
//         cout << a[i - 1] << " " << freq << endl;
//         i++;
//         freq = 1;
//     }

//     if (n == 1 || a[n - 1] != a[n - 2]) {
//         cout << a[n - 1] << " 1" << endl;
//     }
// }


// void printFreq(const vector<int>& a) {                  // for unsorted
//     int maxElement = *max_element(a.begin(), a.end());  // count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
//     vector<int> count(maxElement + 1, 0);               // Count the Frequencies:
//                                                         // For num = 10: count[10]++ results in count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1]
//     for (int num : a) {
//         count[num]++;
//     }

//     for (int i = 0; i <= maxElement; ++i) {
//         if (count[i] > 0) {
//             cout << i << " " << count[i] << endl;
//         }
//     }
// }

// int max_profit(vector<int>& a, int start , int end){
//     if(end<=start){
//         return0;
//     }
//     int profit=0;
//     for(int i=start;i<=end;i++){
//         for(int j=i+1;j<=end;j++){
//             if(a[j]>a[i]){
//                 int curr_profit=a[j]-a[i]+max_profit(a,start,i-1)+max_profit(a,j+1,end);
//                 profit=max(profit,curr_profit);
//             }
//         }

//     }
//     return profit;
// }

// int max_profit(vector<int>& a){
//     int l=a[0];
//     int h=a[0];
    // for(int i=1;i<a.size();i++){       //buy and sell on one time -- maximize the profit
//         if(a[i]<l){      
//             l=a[i];
//         }else{
//             h=a[i];
//         }
//     }
//     return h-l;
// }

// int max_profit(vector<int>& a){
//     int profit=0;
//     for(int i=1;i<a.size();i++){     //buy and sell any time -- maximize profit
//         if(a[i-1]<a[i]){
//             profit+=a[i]-a[i-1];
//         }
//     }
//     return profit;
// }

// int trappingRainWater(vector<int>& a){
//     int water=0;
//     for(int i=1;i<a.size()-1;i++){
//         int lmax=a[i];
//         int rmax=a[i];
//         for(int j=0;j<i;j++){
//             lmax = max(lmax,a[j]);
//         } 
//         for(int j=i+1;j<a.size();j++){
//             rmax = max(rmax,a[j]);
//         }
//         water+=min(lmax,rmax)-a[i];
//     }
//     return water;
// }

// int trappingRainWater(vector<int>& a){
//     int water=0;
//     int n=a.size();

//     int lmax[n],rmax[n];               //a[]={5,0,6,2,3}
//     lmax[0]=a[0];                      //lmax[]={5,5,6,6,6}
//     rmax[n-1]=a[n-1];                  //rmax[]={6,6,6,3,3}

//     for(int i=1;i<n;i++){
//         lmax[i]=max(a[i],lmax[i-1]);
//     } 
//     for(int i=n-2;i>=0;i--){
//         rmax[i]=max(a[i],rmax[i+1]);
//     } 
//     for(int i=1;i<n-1;i++){
//         water+=min(lmax[i],rmax[i])-a[i];
//     } 
   
//     return water;
// }

// int countCosecutive(vector<int>& a){
//     int curr_count=0;
//     int count=0;
//     for(int i=0;i<a.size();i++){
//         if(a[i]==1){
//             count++;
//             if(curr_count<count){
//                 curr_count=count;
//             }
//         }
//         else{
//             count=0;
//         }        
//     }
//     return curr_count;
// }


// int maxsumsubarr(vector<int>& a){
//     int res=a[0];
//     for(int i=1;i<a.size();i++){
//         int curr=0;
//         for(int j=1;j<a.size();j++){
//             curr+=a[j];
//             res = max(curr,res);
//         }
//     }
//     return res;

// }

// int maxsumsubarr(vector<int>& a){
//     int s=a[0];
//     for(int i=1;i<a.size();i++){
//         if(s+a[i]>a[i]){
//             s+=a[i];
//         }
//         else if(a[i-1]<a[i]){
//             s=a[i];
//         }
//     }
//     return s;
// }

// int maxsumsubarr(vector<int>& a){
//     int res=a[0];
//     int s=a[0];
//     for(int i=1;i<a.size();i++){
//         s=max(a[i],s+a[i]);
//         res=max(res,s);
//     }  
//     return res;
// }

// int maxOddEvenSubArr(vector<int>& a){
//     int res=1;
//     int curr=1;
//     for(int i=1;i<a.size();i++){
//         if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0) ){
//             curr++;
//             res=max(res,curr);
//         }else{
//             curr=1;
//         }
//     }
    
//     return res;
    
// }


// int maxCircularSum(vector<int>& a){
//     int n = a.size();
//     int res = a[0];
//     for(int i = 0 ; i < n ; i++){
//         int curr_sum = a[i];
//         int curr_max = a[i] ;
//         for(int j = 1 ; j < n ; j++){
//             int index = (i + j) % n;
//             curr_sum += a[index];
//             curr_max = max (curr_max , curr_sum);
//         }
//         res = max (res , curr_max);
//     }
//     return res;
// }

// int maxCircularSum(vector<int>& a){
//     int max_normal = maxsumsubarr(a);     //it is simply use the kadane method to obtain max sub arr sum 
//     if(max_normal<0){                     // if array constain only negative number then  kadane method was already obtain a result 
//         return max_normal;
//     }

//     int circular_sum=0;                    //{5,-2,3,4}--> two operations performed parallely
//     for(int i=0; i<a.size();i++){
//         circular_sum+=a[i];                //get total sum
//         a[i]= -a[i];                       //and get invert sign of each element 
//     }
//apply kadan method to inverted array and find the max sum , which means that min sum of actual array=-(max sum of inverted array)----circular sum - -(maxsum  inverted array)
//     int max_circular=circular_sum+maxsumsubarr(a);  
//     return max(max_normal,max_circular);
// }

// int findMajority(vector<int>& a){
//     int n = a.size();
//     for(int i=0;i<n;i++){
//         int count =1;
//         for(int j=i;j<n;j++){
//             if(a[j]==a[i]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             return i;
//         }
//     }
// }

//  findMajority(vector<int>& a){
//     int n = a.size();
//     int m=0;
//     int c=1;
//     for(int i=1;i<n;i++){
//         if(a[m]==a[i]) {c++;}
//         else {c--;}

//         if(c==0){
//             m=i;
//             c=1;
//         }
//     }
//     c=0;
//     for(int i=0;i<n;i++){
//         if(a[m]==a[i]){
//             c++;
//         }
//     }
//     if(c<=n/2){
//         m=-1;
//     }
//     return m;
//  }

// void miniFlip(vector<int>& a){
//     int n=a.size();
//     for(int i=1;i<n;i++){
//         if(a[i]!=a[i-1]){
//             if(a[i]!=a[0]){
//                 cout<<"From "<<i<<" to ";
//             }else{
//                 cout<<(i-1)<<endl;
//             }
//         }
//     }  
//     if(a[n-1]!=a[0]){
//             cout<<(n-1)<<endl;
//     }
// }

// int maxslidingwindowsum(vector<int>& a,int ws){
//     int n =a.size();
//     int res=INT_MIN;
//     for(int i=0;i+ws-1<n;i++){
//         int sum = 0;
//         for(int j=0;j<ws;j++){
//             sum+=a[i+j];
//             res=max(res,sum);
//         }
//     }
//     return res;
// }

// int maxslidingwindowsum(vector<int>& a,int ws){  //{1,8,30,-5,20,7} -->ws=3
//     int curr=0;                                  //-------
//     for(int i=0;i<ws;i++){                       //   -------
//         curr+=a[i];                              //in next iteration minus left most of slid and add one more to the right side of the slid
//     }
//     int res=curr;
//     for(int i=ws; i<a.size();i++){
//         curr=curr+a[i]-a[i-ws];
//         res=max(res,curr);
//     }
//     return res;
// }

// bool isSumSub(vector<int>& a, int sum){
//     int curr=0;
//     int s=0,e=0;
//     for(e=0;e<a.size();e++){
//         curr+=a[e];
//         while(sum<curr){
//             curr-=a[s];
//             s++;
//         }
//         if(curr==sum){
//             return true;
//         }
//     }
//     return false;
// }

// int getSum(vector<int>& a , int l , int r){
//     int res=0;
//     for(int i=l; i<=r; i++){
//         res+=a[i];
//     }
//     return res;
// }

// int getSum(vector<int>& a , int l , int r){
//     int n=a.size();
    
//     int p[n];
//     p[0]=a[0];
//     for(int i=1; i<n; i++){
//         p[i]=p[i-1]+a[i];
//     }
//     if(l==0)
//         return p[r];
//     return p[r]-p[l-1];
// }

// int getSum(vector<int>& a , int l , int r){
//     int n = a.size();  
//     // Prefix weighted sum
//     vector<long long> pw(n + 1, 0);
//     for (int i = 1; i <= n; ++i) {
//         pw[i] = i * a[i - 1] + pw[i - 1];
//     }                                        //doubt
//     // Normal prefix sum 
//     vector<long long> p(n + 1, 0);
//     for (int i = 1; i <= n; ++i) {
//         p[i] = a[i - 1] + p[i - 1];
//     }
//     if (l == 0)
//         return pw[r + 1];
//     return (pw[r + 1] - pw[l]) - (l * (p[r + 1] - p[l]));
// }

// bool ePoint(vector<int>& a){
//     int n = a.size();
//     int t=0;
//     for(int i = 0 ; i< n ; i++){
//         t += a[i];
//     }
//     int l = 0;
//     for(int i=0 ; i < n ; i++){
//         t -= a[i];
//         if(l==t){return true;}
//         l += a[i];
//     }
//     return false;
// }


// bool canPartitionIntoThreePartsWithEqualSum(vector<int>& a) {
//     int totalSum = 0;
//     for (int num : a) {
//         totalSum += num;
//     }
//     if (totalSum % 3 != 0) {
//         return false;
//     }
//     int targetSum = totalSum / 3;
//     int currentSum = 0;
//     int parts = 0;

//     for (int num : a) {
//         currentSum += num;
//         if (currentSum == targetSum) {
//             parts++;
//             currentSum = 0; 
//         }
//         if (parts == 3) {
//             return true;
//         }
//     }
//     return false;
// }

// int maxAppeared(vector<int>& a,vector<int>& b){
//     vector<int> freq(100, 0);
//     for (int i = 0; i < a.size(); i++) {
//         for (int j = a[i]; j <= b[i]; j++) {
//             freq[j]++;
//         }
//     }

//     int res = 0;
//     for (int i = 1; i < 100; i++) {
//         if (freq[i] > freq[res]) {
//             res = i;
//         }
//     }
//     return res;
// }

// int maxAppeared(vector<int>& left ,vector<int>& right){
//     vector<int> freq(101, 0);
//     for (int i = 0; i < a.size(); i++) {
//         freq[left[i]]++;
//         freq[right[i]+1]--;
//     }
//     int res = 0;
//     for (int i = 1; i < 100; i++) {
//         freq[i]+=freq[i-1];
//         if (freq[i] > freq[res]) {
//             res = i;
//         }
//     }
//     return res;
// }

// ----------------------------------------------Binary Search-----------------------------------------------------

// int iterativebinarySearch(vector<int>& a,int n){
//     int s=0,e=a.size()-1;

//     while(s<=e){
//         int mid=(s+e)/2;
//         if(a[mid]==n){return mid;}

//         else if(a[mid]>s){e=mid-1;}

//         else{s=mid+1;}
//     }
//     return -1;
// }

// int recursivebinarySearch(vector<int>& a,int low,int high,int x){
//     if(low > high){
//         return -1;
//     }
//     int mid = (low + high) / 2;
//     if(a[mid] == x){return mid;}
//     else if(a[mid] > x){recursivebinarySearch(a,low,mid-1,x);}
//     else{recursivebinarySearch(a,mid+1,high,x);}
// }

// int firstOccurence(vector<int>& a, int x){
//     int n = a.size();
//     int low = 0;
//     int high = n-1;
//     while (low <= high){
//         int mid = (low + high) / 2;
//         if(a[mid] > x)
//             high = mid - 1;       
//         else if(a[mid] < x)
//             low = mid + 1;       
//         else{
//             if(mid == 0 || a[mid-1]!=a[mid])
//                 return mid ;
//             else
//                 high = mid - 1;           
//         }
//     }
//     return -1;
// }

// int lastOccurence(vector<int>& a, int x){
//     int n = a.size();
//     int low = 0;
//     int high = n-1;
//     while (low <= high){
//         int mid = (low + high) / 2;
//         if(a[mid] > x)
//             high = mid - 1;      
//         else if(a[mid] < x)
//             low = mid + 1;       
//         else{
//             if(mid == n-1 || a[mid]!=a[mid+1])
//                 return mid ;
//             else
//                 low = mid + 1;          
//         }
//     }
//     return -1;
// }

// int countOccurence(vector<int>& a, int x){
//     int n = a.size();
//     int first= firstOccurence (a, x);
//     if ( first == -1){
//         return 0;
//     }
//     return (lastOccurence (a, x) - first) + 1;
    
// }

// int countOccurenceOf1(vector<int>& a){
//     int n = a.size();
//     int first= firstOccurence (a, 1);
//     if ( first == -1){
//         return 0;
//     }
//     return (lastOccurence (a, 1) - first) + 1;
    
// }

// int countOccurenceOf1(vector<int>& a){
//     int n = a.size();
//     int low = 0;
//     int high = n-1;
//     while (low <= high){
//         int mid = (low + high) / 2;
//         if(a[mid] == 0)
//             low = mid + 1;       
//         else{
//             if(mid == 0 || a[mid-1]!=0)
//                 return n-mid ;
//             else
//                 high = mid - 1;           
//         }
//     }
//     return 0;
// }

// int squareRoot(int x){
//     int i = 1;
//     while(i*i <= x){
//         i++;
//     }
//     return i-1;
// }

// int squareRoot(int x){
//     int ans = -1;
//     int low = 0;
//     int high = (x/2) + 1;
//     while(low <= high){
//         int mid = (low + high) / 2;
//         int sqmid = mid*mid;

//         if(sqmid == x) return mid;

//         else if(sqmid > x) high=mid-1;

//         else{
//             low=mid+1;
//             ans=mid;
//         }
//     }
//     return ans;
// }


//infinite size array --> search element 
// int search(vector<int>& a , int x){
//     if (a[0]==x) return 0;
//     int i =0;
//     while(a[i]<x)
//         i=i*i;
//     if(a[i]==x) return i;
    
//     return binarysearch (a,i/2+1,i-1,x);
// }

// search in sorted and rotated array 
// int search(vector<int>& a,int x){
//     int n=a.size();
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid= (low+high)/2;
//         if(a[mid]==x) return  mid;
//         if(a[low]<a[mid]){  //left part sorted
//             if(x>=a[low] && x<=a[mid]) high=mid-1;
//             else low=mid+1   
//         }
//         else{
//             if(X>a[mid] && x<a[high]) low=mid+1; //right part is sorted
//             else high=mid-1;
//         }
//     }
// }

// search for any one peak element
// int peak(vector<int>& a){
//     int n=a.size();
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid= (low+high)/2;
//         if(mid==0 || a[mid]>=a[mid-1] && mid==n-1 || a[mid]>=a[mid+1]){
//             return mid;
//         }
//         if(mid>0 && a[mid-1]>=a[mid]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
// }

// bool isPairSumPresent(vector<int>& a,int x){
//     int n=a.size();
//     int i=0, j=n-1;
//     while(i<j){
//         if(a[i]+a[j]==x) return true;
//         else if(a[i]+a[j]<x) i++;
//         else j--;
//     }
//     return false;
// }




// double MedianOfArrays(vector<int>& array1, vector<int>& array2)
//     {
//         int n1= array1.size(), n2=array2.size();
        
//         if(n1>n2) return MedianOfArrays(array2, array1);
//         int low = 0, high = n1;
        
//         int left = (n1+n2+1)/2;
//         int n = n1+n2;
        
//         while(low<=high)  {
//             int mid1 = (low+high) >> 1;
//             int mid2 = left-mid1;
//             int l1=INT_MIN,l2=INT_MIN;
//             int r1=INT_MAX,r2=INT_MAX;
//             if(mid1<n1) r1 = array1[mid1];
//             if(mid2<n2) r2 = array2[mid2];
//             if(mid1-1>=0) l1 = array1[mid1-1];
//             if(mid2-1>=0) l2 = array2[mid2-1];
//             if(l1<=r2 && l2<=r1)  {
//                 if(n%2==1) {
//                     return max(l1,l2);
//                 }
//                 else
//                     return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
                
//             }
//             else if(l1>r2) high = mid1-1;
//             else low = mid1+1;
//         }
//     return 0;
//     }


// int sum(int arr[], int s, int e){
//     int sum = 0;
//     for(int i = s; i <= e; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int findpages(int arr[],int n , int k){
//     if(k==1)
//         return sum(arr,0,n-1);
//     if(n==1)
//         return a[0];
//     int res = INT_MAX;
//     for(int i = 0; i < n; i++){
//         res = min(res, max(findpages(arr,i,k-1),sum(arr,i,n-1)));
//     }
//     return res;
// }

// bool isfeasible(int n , int arr[], int m , int pages){
//         int student = 1, sum = 0;
        
//         for(int i = 0 ; i < n; i++){
//             if(arr[i] > pages) return false;
//             if(sum + arr[i] > pages){
//                 student++;
//                 sum = arr[i];
//             }else{
//                 sum += arr[i];
//             }
//         }
//         return (student<=m);
//     }

    
// long long findPages(int n, int arr[], int m) {
//         if(m>n) return -1;
        
//         int mx = 0, sum = 0;
//         for(int i = 0; i < n; i++){
//             sum += arr[i];
//             mx = max(mx,arr[i]);
//         }
        
//         // using binary search
//         int low = mx, high = sum, res=0;
//         while (low <= high){
//             int mid = (low + high) / 2;
//             if( isfeasible(n,arr,m,mid) ){
//                 res = mid;
//                 high = mid - 1;
//             }else{
//                 low = mid + 1;
//             }
//         }
//         return res;
//     }


// ---------------------------------------------------string----------------------------------------------------


// void countCharInString(string str) {
//     int charcount[26] = {0};
//     for (int i=0; i<str.length();i++) {
//         charcount[str[i]-'a']++;
//     }
//     for (int i=0; i<26; i++) {
//         if (charcount[i]>0) {
//             cout <<(char)(i+'a')<<" "<<charcount[i]<<endl;
//         }
//     }
// }

//  void prctice(string str){
//     cout<<"Enter your name  : ";
//     // cin>>str;//it will not consider backspace as input if input is mohit mishra then output is mohit only
//     getline(cin,str,'r');//three argument 1.for input 2.for variable name 3.on which char need stop
//     cout<<str;
//  }


// bool checkPalindrom(string str){
//     string rev = str;
//     reverse(str.begin(),str.end());
//     if(rev==str){
//         return true;
//     }else{
//         return false;
//     }
// }

// bool checkPalindrom(string str){
//     int i=0,j=str.length()-1;
//     while(i<j){
//         if(str[i]!=str[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// iterative solution
// bool subSequenceOrNot(string str1, string str2){
//         // int i=0,j=0;
//         // while(i<str1.length() && j<str2.length()){
//         //     if(str1[i]==str2[j]){
//         //         i++;
//         //         j++;
//         //     }else{
//         //         i++;
//         //     }
//         // return (j==str2.length());
//         // }
//         int j=0;
//         for(int i=0;i<str1.length()&& j<str2.length();i++){
//             if(str1[i]==str2[j]){
//                 j++;
//             }
//         }
//         return (j==str2.length());
// }

// recursive solution
// bool subSequenceOrNot(string str1, string str2,int n,int m){
//     if(n==0){return false;}
//     if(m==0){return true;}

//     if(str1[n-1]==str2[m-1]){
//         return subSequenceOrNot(str1,str2,n-1,m-1);
//     }else{
//         return subSequenceOrNot(str1,str2,n-1,m);
//     }
// }

// bool isAnagram(string s1,string s2){
//     if (s1.length()!=s2.length){
//         return false;
//     }
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     return (s1==s2);
// }

// bool isAnagram(string s1,string s2){
//     if (s1.length()!=s2.length()){
//         return false;
//     }
//     int count[256]={0};
//     for(int i=0;i<s1.length();i++){
//         count[s1[i]]++;
//         count[s2[i]]--;
//     }
//     for(int i=0;i<256;i++)
//         if(count[i]!=0)
//         return false;
//     return true;
// }

// bool isAnagram(string s1,string s2){
//     if (s1.length()!=s2.length()){
//         return false;
//     }
//     int sum1=0,sum2=0;
//     for(int i=0;i<s1.length();i++){          //check???? <---byself--->wrong
//         sum1+=(int)s1[i];
//         sum2+=(int)s2[i];
//     }
//     sum1-=(int)s1[0];
//     for(int i=0;i<s1.length();i++){
//         if(s1[0]==s2[i]){
//             sum2-=s2[i];
//             break;
//         }
//     }
//     return (sum1==sum2);
// }


// int leftMost(string str){
//     int count[26];
//     fill(count,count+256,0);
//     for(int i=0;i<str.length();i++){
//         count[str[i]-'a']++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(count[str[i]-'a']>1)
//         return i;
//     }
//     return -1;
// }

// int leftMost(string str){
//     int count[256];
//     fill(count,count+256,-1);
//     int res=INT_MAX;
//     for (int i = 0; i < str.length(); i++){
//         int curr=count[str[i]];
//         if(curr==-1){
//             count[str[i]]=i;
//         }else{
//             res=min(res,curr);
//         }
//     }
//     return (res==INT_MAX) ? -1 : res;    
// }

// int leftMost(string str){
//     bool visited[256];
//     fill(visited,visited+256,false);
//     int res = -1;
//     for (int i = str.length(); i >= 0; i--){
//         if(visited[str[i]]){
//             res=i;
//         }else{
//             visited[str[i]]=true;
//         }
//     }
//     return res;    
// }

// int nonRep(string s){
//     int count[256];
//     fill(count,count+256,-1);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(count[s[i]]==-1){
//             count[s[i]]=i;
//         }else{
//             count[s[i]]=-2;
//         }
//     }
//     int res=INT_MAX;
//     for (int i = 0; i < 256; i++)
//     {
//         if(count[i]>=0){
//             res=min(res,count[i]);
//         }
//     }
//     return (res==INT_MAX) ? -1 : res;
// }

// void reverse(char s[],int low,int high){
//     while(low<=high){
//         swap(s[low],s[high]);
//         low++;
//         high--;
//     }
// }
// void reverseWords(string str){
//     int n=str.length();
//     char s[n];
//     strcpy(s,str.c_str());

//     int start=0;
//     for (int end = 0; end < n; end++){
//         if(s[end]==' '){
//             reverse(s,start,end-1);
//             start=end+1;
//         }
//     }
//     reverse(s,start,n-1);
//     reverse(s,0,n-1);
    
//     for (int i = 0; i < n; i++){
//         cout<<s[i];
//     }
// }

// Pattern searching -->
// void patternSearchNaive(string pat,string txt){
//     int n = txt.length();
//     int m = par.length();
//     for(int i=0;i<n-m;i++){
//         for(int j=0;j<m;j++){
//             if(pat[j]!=txt[j+i]){
//                 break;
//             }
//             if(j==m){
//                 cout<<i<<" ";
//             }
//         }   
//     }
// }

// void patternSearchNaive(string pat,string txt){
//     int n = txt.length();
//     int m = par.length();
//     for(int i=0;i<n-m){
//         int j;                              //O(n) time complexity-->
//         for(j=0;j<m;j++){
//             if(pat[j]!=txt[j+i]){           //ABCEABEFABCD
//                 break;                      //ABCD                
//             }                               //I=0:ABCEABEFABCD
//             if(j==m){                       //I=3    ABCD         I=I+3
//                 cout<<i<<" ";               //I=4     ABCD        I++
//             }                               //I=6       ABCD      I+=2
//             if(j==0){                       //I=7        ABCD     I++
//                 i++;                        //I=8         ABCD    I++
//             }else{                          //                    COUT<<8
//                 i=i+j;
//             }
//         }   
//     }
// }

// Rabin Karp searching algorithm

// void RBSearch(string txt, string pat){
//     int n=txt.length();                    //when we are doing weighted sum of ascii value of char of string this 
//     int m=pat.length();                    // number become realy large even for smaller string
//     int d = 256, q = 101;                  //  so compute it under modulo so that we can store this number in int 
                 

//     int h=1;                               //pre compute the value of d^m-1 % q and stored in  h
//     for(int i=0;i<m;i++)
//     {                  
//         h=(h*d)%q;                            
//     }

//     int t=0,p=0;                           //compute hash value of pat and to from txt 
//     for (int i = 0; i < m; i++)            // p = pat[0]*d^m-1 + par[1]*d^m-2 + ........+ par[last]*d^0;
//     {                                      // e.g: abc , p should be a*d^2 + b*d^1 + c;
//         t=(t*d + txt[i])%q;                // use honours rule :  p=0;
//         p=(p*d + pat[i])%q;                // p=(0*d+a)=a --> p=(a*d+b) --> p=((a*d+b)*d )+ c  which is equal to 
//     }                                      // p=a*d^2+b*d+c
    

//     for(int i=0;i<=n-m;i++)
//     {               
//         if(p==t){
//             bool flag = true;
//             for (int j = 0; j < m ; j++)
//             {
//                 if(pat[j] != txt[j+i]){     // simple sliding window concept
//                     flag=false;
//                     break;
//                 }
//             }
//             if(flag==true){
//                 cout<<i<<" ";
//             }  
//         }
//         if(i<n-m){
//             t=((d*(t-txt[i]*h))+txt[i+m])%q;  // e.g: txt = 132456  pat = 1324  here d=10--> 0 to 9 m->no. of digit in pat
//             if(t<0){                          // for next slide means 3245 we do 10*(1324-1*10^3)+5
//                 t=t+q;
//             }
//         }
//     }
// }

// Question-->
// Given an array arr integers. Assume sz to be the initial size of the array. Do the following operations exactly sz/2 times. In every kth (1<= k <= sz/2) operation:
// Right-rotate the array clockwise by 1.
// Delete the (n– k + 1)th element from begin.
// Now, Return the first element of the array.
// Note: Here n keeps on decreasing with every operation.

// int rotateDelete(vector<int> &arr) {
//     int k=1;
//     while(arr.size()>1){
//         int temp=arr[arr.size()-1];
//         arr.erase(arr.begin()+(arr.size()-1));
//         arr.insert(arr.begin(),temp);
//         arr.erase(arr.begin()+(arr.size()-k));
//         k++;
//         if(k>arr.size()) break;
//     }
//     return arr[0];
// }

// bool isRotatedVersion(string s1,string s2){
//     if(s1.length()!=s2.length()){return false;}
//     return (s1+s1).find(s2)!=string::npos;
// }

// bool areArraysSame(vector<int>& ct, vector<int>& cp) {
//     return ct.size()==cp.size() && equal(ct.begin(),ct.end(),cp.begin());
// }
// bool anagramSearch(string txt, string pat) {
//     vector<int> ct(256, 0);
//     vector<int> cp(256, 0);
//     for (int i=0; i<pat.length(); i++) {
//         ct[txt[i]]++;
//         cp[pat[i]]++;
//     }
//     for (int i=pat.length(); i<txt.length(); i++) {
//         if (areArraysSame(ct,cp)) return true;
//         ct[txt[i]]++;
//         ct[txt[i-pat.length()]]--;
//     }
//     return areArraysSame(ct, cp);
//

// int fact(int n) {
//     int ans=1;
//     for (int i=2;i<=n;i++) {
//         ans*=i;
//     }
//     return ans;
// }
// int lexicographicalRank(string str) {
//     int res=1;
//     int n=str.length();   
//     int mul=fact(n);
//     for(int i=0;i<n-1;i++) {
//         mul /= (n - i);
//         int count=0;
//         for (int j=i+1;j<n;j++) {
//             if(str[j]<str[i]) count++;
//         }
//         res+=count*mul;
//     }
//     return res;
// }

// int fact(int n) {
//     int ans=1;
//     for (int i=2;i<=n;i++) {
//         ans*=i;
//     }
//     return ans;
// }
// int lexicographicalRank(string str) {
//     int res=1;
//     int n=str.length();   
//     int mul=fact(n);
//     int count[256]={0};
//     for(int i=0;i<n;i++) {
//         count[str[i]]++;
//     }
//     for(int i=1;i<256;i++){
//         count[i]+=count[i-1];
//     }
//     for(int i=0;i<n-1;i++){
//         mul/=(n-i);
//         res+=count[str[i]-1]*mul;
//         for(int j=str[i];j<256;j++){
//             count[j]--;
//         }
//     }
//     return res;
// }

// int longestDistinct(string str){
//     int res=0;
//     int n=str.length();
//     for(int i=0;i<n;i++){
//         vector<int>visited(256);
//         for(int j=i;j<n;j++){
//             if(visited[str[i]]==true) break;
//             else{
//                 res=max(res,j-i+1);
//                 visited[str[i]]=true;
//             }
//         }
//     }
//     return res;
// }

// int longestDistinct(string str){
//         int n=s.length(),res=0;
//         vector<int>prev(256,-1);
//         int i=0;
//         for(int j=0;j<n;j++){
//             i=max(i,prev[s[j]]+1);
//             int maxend=j-i+1;
//             res=max(res,maxend);
//             prev[s[j]]=j;
//         }
//         return res;
// }




// Constructing Longest proper Prefix suffix 
// vector<int> longPropPreSuff(string str) {
//     vector<int> arr(str.length(), 0);
//     for (int i=0;i<str.length();i++) {
//         for (int j=1; j<=i+1;j++) {
//             bool flag=true;       
//             for (int k=0; k<j; k++) {
//                 if (str[k]!=str[i+1-j+k]) {
//                     flag=false;
//                     break;
//                 }
//             }
//             if(flag){
//                 arr[i]=j;
//             }
//         }   
//     }
//     return arr;
// }

// int main() {
//     string s1 = "dcba";
    
    // vector<int> result = longPropPreSuff(s1);
    
    // cout << "LPS array: ";
    // for (int i : result) {
    //     cout << i << " ";
    // }
//     cout << lexicographicalRank(s1);

//     return 0;
// }




// int main() {
//     string s1 = "abc";
//     string s2 = "bca";
//     cout << isRotatedVersion(s1, s2) << endl; // Outputs: 1 (true)
//     // cout<<a;
//     return 0;
    // vector<int> a = {1,2,3,4,5}; 
    // int ans = a.size();
    // if (canPartitionIntoThreePartsWithEqualSum(a)) {
    //     cout << "The array can be partitioned into three parts with equal sum." << endl;
    // } else {
    //     cout << "The array cannot be partitioned into three parts with equal sum." << endl;
    // }
    // vector<int> a = {1, 2, 5, 15};
    // vector<int> b = {5, 8, 7, 18};
    // cout << "The element that appears the most in the given ranges is: " << maxAppeared(a, b) << endl;
    // for(const auto& i:a){
    //     cout<<i<<" ";
    // }
    // for(int i=0;i<ans;i++){
    //     cout << a[i] <<" ";
    // }
    // cout<<ans;
//     return 0;
// }


// Question-Given an integer array arr, remove a subarray (can be empty) 
// from arr such that the remaining elements in arr are non-decreasing.
// Return the length of the shortest subarray to remove.
// A subarray is a contiguous subsequence of the array.

// int findLengthOfShortestSubarray(vector<int>& arr) {
//     int n = arr.size();
//     int j = n-1;
//     while(j > 0 && arr[j] >= arr[j-1]) {
//         j--;
//     }
//     int i = 0;
//     int result = j; 
//     while(i < j && (i == 0 || arr[i] >= arr[i-1])) { 

//         while(j < n && arr[i] > arr[j]) {
//             j++;
//         }
//         result = min(result, j - i - 1);
//         i++;
//     }

//     return result;
// }

