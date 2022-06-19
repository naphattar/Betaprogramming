#include<bits/stdc++.h>
using namespace std;
int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int main(){
    int k,m,n,best;
    cin >> k;
    for(int a = 0;a<k;a++){
        best = 0;
        cin >> m >> n;
        int table[m][n];
        int solve[m][n][4];
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin >> table[i][j];
            }
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                for(int k = 0;k<4;k++){
                }

            }
        }


    }




    return 0;
}