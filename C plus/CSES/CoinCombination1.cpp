#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    const long long m = 1000000007;
    cin >> n >> x;
    int c[n];
    for(int i = 0;i<n;i++){
        cin >> c[i];
    }
    vector<long long> dp;
    for(int i = 0;i<=x;i++){dp.push_back(0);}
    dp[0] = 1;
    for(int i = 0;i<=x;i++){
        for(int j = 0;j<n ;j++){
            if(i >= c[j]){
                dp[i] = (dp[i]+dp[i-c[j]])%m;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}