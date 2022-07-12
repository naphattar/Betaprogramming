#include<bits/stdc++.h>
using namespace std;
unsigned long long m = 10*10*10*10*10*10*10*10*10+7;
long long dp[1000001];

int main(){
    dp[0] = 1;
    long long n;
    cin >> n;
    for(int i = 0;i<n+1;i++){
        dp[i+1] = (2*dp[i])%m;
    }
    cout << dp[n] << endl;
    return 0;
}