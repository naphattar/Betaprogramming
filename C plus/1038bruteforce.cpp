#include<bits/stdc++.h>
using namespace std;
int n;
double ans = 0;
double table[20][20];
int order[20];
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for(int i = 0;i<n;i++){
        order[i] = i;
        for(int j = 0;j<n;j++){
            cin >> table[i][j];
            table[i][j] = table[i][j]/100;
        }
    }
    do {
        double p = 1;
        for(int i = 0;i<n;i++){
            p = p*table[i][order[i]];
        }
        if(p > ans){
            ans = p;
        }
    } while (next_permutation(order,order+n));
    cout << fixed << setprecision(12) << ans*100 << endl;;
}