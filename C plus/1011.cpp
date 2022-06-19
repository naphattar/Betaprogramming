#include<bits/stdc++.h>
using namespace std;
char table[5][5];
int score = 0;
int m,n,k,r,c;
pair<int,int> d[4] = {{-1,0},{1,0},{0,1},{0,-1}};

bool intable(int r,int c){
    return((r>= 0) && (r<n) && (c>= 0) && (c<m));
}
void checkvalidmove(int r,int c ,char direct){
    if(table[r][c] == '-' || table[r][c] == '#'){
        score -=5;
        return;
    }
    if(direct == 'R'){
        if(c+1 >= m){
            score -=5;
            return;
        }
        if(table[r][c+1] == '-'){
            table[r][c+1] = table[r][c];
            table[r][c] = '-';
            c++;
            return;
        }
    }else{
        if(c-1 < 0){
            score -=5;
            return;
        }
        if(table[r][c-1] == '-'){
            table[r][c-1] = table[r][c];
            table[r][c] = '-';
            c--;
            return;
        }
    }
}
void fallmove(int r,int c){
    if(table[r][c] == '-' || table[r][c] == '#'){
        return;
    }
    while(r+1 < n){
        if(table[r+1][c] == '-'){
            table[r+1][c] = table[r][c];
            table[r][c] = '-';
            r++;
        }
    }
    if( table[r][c] == '-' || table[r][c] == '#'){
        return;
    }
    for(int i = 0;i<4;i++){
        int dr = d[i].first;
        int dc = d[i].second;
        if(intable(r+dr,c+dc)){
            if(table[r][c] == table[r+dr][c+dc]){
                table[r][c] = '-';
                table[r+dr][c+dc] = '-';
                score += 10;
                fallmove(r,c);
                fallmove(r+dr,c+dc);
                r = r+dr;
                c = c+dc;
                break;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> table[i][j];
        }
    }
    cin >> k;
    char direct;
    for(int i = 0;i<k;i++){
        cin >> r >> c >> direct;
        checkvalidmove(r,c,direct);
        fallmove(r,c);
    }
    cout << score << endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}