#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,m,a,b;
    cin >> k >> n >> m;
    vector<int> path[n];
    vector<int> score[2][n];
    for(int i = 0;i<m;i++){
        cin >> a >> b;
        path[a-1].push_back(b-1);
    }
    int best = 0;
    
    for(int i = 0;i<k;i++){
        if(i == 0){
            for(int j = 0;j<n;j++){
                score[0][j].push_back(j);
            }
        }else{
            for(int j = 0;j<n;j++){
                score[0][j] = score[1][j];
            }

        }
        for(int j = 0;j<n;j++){
            score[1][j] = score[0][j];
            vector<int> child = path[j];
            for(int l = 0;l<child.size();l++){
                for(int p = 0;p<score[0][child[l]].size();p++){
                    score[1][j].push_back(score[0][child[l]][p]);
                }
            }
        }

    }
    for(int i = 0;i<score[1][0].size();i++){
        best = max(best,score[1][0][i]);
    }
    cout << best+1 << endl;
    return 0;
}