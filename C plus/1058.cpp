#include<bits/stdc++.h>
using namespace std;
int k,n,m;
char table[1000][1000];
void solve(){
    int ans = 0;
    int left[m][n];
    int right[m][n];
    int up[m][n];
    int down[m][n];
    for(int i = 0;i<m;i++){
        if(table[i][0] == '1'){
            left[i][0] = 1;
        }else{
            left[i][0] = 0;
        }
        if(table[i][n-1] == '1'){
            right[i][n-1] = 1;
        }else{
            right[i][n-1] = 0;
        }
        for(int j = 1;j<n;j++){
            if(table[i][j] == '1'){
                left[i][j] = left[i][j-1]+1;
            }else{
                left[i][j] = 0;
            }
        }
        for(int j = n-2;j>=0;j--){
            if(table[i][j] == '1'){
                right[i][j] = right[i][j+1]+1;
            }else{
                right[i][j] = 0;
            }
        }
    }
    for(int j = 0;j<n;j++){
        if(table[0][j] == '1'){
            up[0][j] = 1;
        }else{
            up[0][j] = 0;
        }
        if(table[m-1][j] == '1'){
            down[m-1][j] = 1;
        }else{
            down[m-1][j] = 0;
        }
        for(int i =1 ;i<m;i++){
            if(table[i][j] == '1'){
                up[i][j] = up[i-1][j]+1;
            }else{
                up[i][j] = 0;
            }
        }
        for(int i = m-2;i>= 0 ;i--){
            if(table[i][j] == '1'){
                down[i][j] = down[i+1][j]+1;
            }else{
                down[i][j] = 0;
            }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            ans = max({ans,left[i][j]+up[i][j],left[i][j]+down[i][j],right[i][j]+up[i][j],right[i][j]+down[i][j]});
        }
    }
    cout << max(0,ans-1) << endl;

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> k;
    for(int a = 0;a<k;a++){
        cin >> m >> n;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin >> table[i][j];
            }
        }
        solve();
    }
 

    return 0;
}