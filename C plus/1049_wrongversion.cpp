#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,l,s;
    cin >> n >> m;
    int velocity[n];
    vector<int> racerot[m+1];
    for (int i = 0;i<n;i++){
        cin >> a >> l >> s;
        if(racerot[l].empty()){
            racerot[l].push_back(a);
            velocity[a] = s;
        }else{
            if(s > velocity[racerot[l][racerot[l].size()-1]]){
                racerot[l].push_back(a);
                velocity[a] = s;
            }else if(s == velocity[racerot[l][racerot[l].size()-1]]){
                if(a < racerot[l][racerot[l].size()-1]){
                    racerot[l].push_back(a);
                    velocity[a] = s;
                }
            }
        }
    }
    for (int i = 0;i<m+1;i++){
        if(!(racerot[i].empty())){
            cout << racerot[i][racerot[i].size()-1] << endl;
        }
    }
    return 0;
}