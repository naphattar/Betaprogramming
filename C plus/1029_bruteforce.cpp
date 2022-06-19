#include<bits/stdc++.h>
using namespace std;
int n,m,q,a,b,c;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n >> m >> q;
    int magnet[n] = {};
    int ans[n] = {};
    for(int i = 0;i<m;i++){
        cin >> a >> b;
        for(int j = a-1;j<a-1+b;j++){
            magnet[j] = (magnet[j]+1)%2;
        }
    }
    int start = 0,stop = start;
    while(stop < n){
        while(magnet[stop] == magnet[start]){
            stop++;
        }
        for(int i = start;i<stop;i++){
            ans[i] = stop-start;
        }
        start = stop;
    }
    for(int i = 0;i<q;i++){
        cin >> c;
        cout << ans[c-1]  << endl;
    }
    return 0;
}