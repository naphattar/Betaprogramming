#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long n,m = 10*10*10*10*10*10*10*10*10+7;
    cin >> n;
    if(n<=2){cout << n << endl;return 0;}
    long long dp[n+1] = {};
    dp[1] = 1;
    for(long long i = 2;i<=6;i++){
        dp[i] = (2*dp[i-1]);
    }
    for(long long i = 7;i<=n;i++){
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%m;
    }
    cout << dp[n] << endl;
    return 0;
}