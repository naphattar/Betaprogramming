#include <bits/stdc++.h>
using namespace std;
int n,di,dj,out = 0;
int table[17][17];
int countneightbor(int i,int j){
    int ans = 0;
    if(i>0 && table[i-1][j] == table[i][j]){
        ans++;
        di = -1;
    }
    if(i<n-1 && table[i+1][j] == table[i][j]){
        ans++;
        di = 1;
    }
    if(j>0 && table[i][j-1] == table[i][j]){
        ans++;
        dj = -1;
    }
    if(j<n-1 && table[i][j+1] == table[i][j]){
        ans++;
        dj = 1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for(int  i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> table[i][j];
        }
    }
    for(int  i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(countneightbor(i,j) == 2){
                if(countneightbor(i+di,j) == 1 && countneightbor(i,j+dj) == 1){
                    out++;
                }
            }
            di = 0,dj = 0;
        }
    }
    cout << out << endl;
    return 0;
}