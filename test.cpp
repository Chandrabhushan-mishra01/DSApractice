#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool f(int y){
    return(y%4==0&&y%100!=0)||(y%400==0);
}

void s(){
    ll a,b;
    cin>>a>>b;
    ll c=0,d=0;
    vector<ll>e={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int y=a;y<=b;y++){
        vector<ll>m=e;
        if(f(y))m[1]=29;
        for(int n=0;n<12;n++){
            if(c%7==0)d++;
            c=(c+m[n])%7;
        }
    }
    cout<<d<<"\n";
}

int main(){
    s();
}