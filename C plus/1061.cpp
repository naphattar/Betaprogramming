#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,x,y,temp;
    cin >> m;
    int area[m][m];
    int best[m][m];
    cin >> x >> y;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){
            cin >> area[i][j];
        }
    }
    temp = area[x][y];
    return 0;
}