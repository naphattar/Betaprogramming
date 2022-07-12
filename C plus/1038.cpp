#include<bits/stdc++.h>
using namespace std;
int n;
double ans;
double table[20][20];
vector<int> order[21];
double dp[1 << 20];
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    dp[0] = 1;
    for(int i = 1;i<= (1<< n);i++){
        order[__builtin_popcount(i)].push_back(i);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> table[i][j];
            table[i][j] = table[i][j]/100;
            for(auto k : order[i+1]){
                if(k && (1 << j)){
                    dp[k] = max(dp[k],dp[k-(1<<j)]*table[i][j]);
                }
            }
        }
    }
    ans = dp[(1<< n)-1];
    cout << fixed << setprecision(12) << ans*100 << endl;
    return 0;
}
