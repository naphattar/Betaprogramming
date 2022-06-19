#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,m,n,a,b;
    cin >> k >> n >> m;
    int energy[n] = {};
    vector<int> path[n];
    for(int i = 1;i<n;i++){
        energy[i] = 20001;
    }
    for(int i = 0;i<m;i++){
        cin >> a >> b;
        path[a-1].push_back(b-1);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<path[i].size();j++){
            energy[path[i][j]] = min(energy[path[i][j]],energy[i]+1);
        }
    }
    for(int i = n-1;i>-1;i--){
        if (energy[i] <= k){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}