#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,l,s,round = 0;
    cin >> n >> m;
    int winnerid,fastest = 0,fastestrot;
    int velocity[n];
    vector<int> racerot[m];
    for (int i = 0;i<n;i++){
        cin >> a >> l >> s;
        velocity[a] = s;
        racerot[l-1].push_back(a);
        int k = racerot[l-1].size();
        round = max(round,k);
    }
    
    for(int i = 0;i<round;i++){
        for(int j = 0;j<m;j++){
            if(racerot[j].size()>i){
                if(velocity[racerot[j][i]] > fastest){
                    fastest = velocity[racerot[j][i]];
                    winnerid = racerot[j][i];
                    fastestrot = j;
                }
            }
        }
        winnerid = racerot[fastestrot][i];
        cout << winnerid << endl;
        winnerid = n+1;
        fastest = 0;
        
    }
    
    return 0;
}