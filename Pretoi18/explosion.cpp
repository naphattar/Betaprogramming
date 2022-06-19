#include<bits/stdc++.h>
using namespace std;
int n,m,result;
long long x,y;
long long city[500000];
int solve(int n , long long [] c){
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum += c[i];
    }
    if(sum == 0){
        return 0;
    }
    if(n == 0){
        return 
    }
    long long d;
    for(int i = 0;i<n;i++){
        if(abs(i-n-1) <= m){
            d[i] = c[i]-y;
        }else{
            d[i] = c[i]-x;
        }
        if(d[i] < 0){
            d[i] == 0;
        }
    }



}
int main(){
    cin >> n >> m >> x >> y;
    for(int i = 0;i<n;i++){
        cin >> city[i];
        
    }





    return 0;
}