#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    int c[n];
    for(int i = 0;i<n;i++){
        cin >> c[i];
    }
    vector<int> dp;
    for(int i = 0;i<=x;i++){dp.push_back(1e9);}
    dp[0] = 0;
    for(int i = 0;i<=x;i++){
        for(int j =0;j<n;j++){
            if(i+c[j] <= x){
                dp[i+c[j]] = min(dp[i+c[j]],dp[i]+1);
            }
        }
    }
    if(dp[x] == 1e9){dp[x] = -1;}
    cout << dp[x] << endl;
    return 0;
}