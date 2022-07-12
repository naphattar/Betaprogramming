#include<bits/stdc++.h>
using namespace std;
short m,x,y,ans = -5;
short di[4] = {-1,1,0,0}, dj[4] = {0,0,1,-1};
int main(){
    cin >> m;
    short temp[m][m];
    bool visited[m][m];
    cin >> x >> y;
    for(short i = 0;i<m;i++){
        for(short j = 0;j<m;j++){
            visited[i][j] = false;
            cin >> temp[i][j];
        }
    }
    queue<pair<short,short>> q;
    q.push(make_pair(y-1,x-1));
    while(!q.empty()){
        short ci = q.front().first, cj = q.front().second;
        q.pop();
        visited[ci][cj] = true;
        if(temp[ci][cj] > ans){ans = temp[ci][cj];}
        for(short i = 0;i<4;i++){
            short nci = ci+di[i] , ncj = cj+dj[i];
            if(nci >= 0 && nci < m && ncj >= 0 && ncj < m ){
                if(temp[nci][ncj] > temp[ci][cj] && temp[nci][ncj] != 100 && !visited[nci][ncj]){
                    q.push(make_pair(nci,ncj));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}