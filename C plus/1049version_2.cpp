#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,l,s,k,round = 0;
    cin >> n >> m;
    int winnerid,fastest = 0,fastestrot;
    int velocity[n] = {};
    vector<int> racerot[m];
    int raceround[n] = {};
    int rotround[n] = {};
    for(int i = 0;i<n;i++){
        cin >> a >> l >> s;
        velocity[a] = s;
        racerot[l-1].push_back(a);
        k = racerot[l-1].size();
        round = max(round,k);
        if (s > velocity[raceround[k-1]]){
            raceround[k-1] = a;
            rotround[k-1] = l;
        }else if (s == velocity[raceround[k-1]]){
            if(l < rotround[k-1]){
                raceround[k-1] = a;
            }
        }
    }
    for(int i = 0;i<round ;i++){
        cout << raceround[i] << endl;
    }
    return 0;
}