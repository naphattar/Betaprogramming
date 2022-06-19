#include<bits/stdc++.h>
using namespace std;
char table[8][8];
map<char,int> column;
string alp = "abcdefgh";
pair<int,int> dis[8] = {make_pair(0,1),make_pair(0,-1),make_pair(1,0),make_pair(1,-1),make_pair(1,1),make_pair(-1,0),make_pair(-1,1),make_pair(-1,-1)};
void change(int r ,int c , int color){
    char current,opposite;
    for(int i = 0;i<8;i++){
        int dx = dis[i].first;
        int dy = dis[i].second;
        if(color == 0){
            current = 'X';
            opposite = 'O';
        }else{
            current = 'O';
            opposite = 'X';
        }
        int j = 1;
        while(r+j*dx > -1 && r+j*dx <8 && c+j*dy > -1 && c+j*dy < 8 ){
            if(table[r+j*dx][c+j*dy] == opposite){
                j++;
            }else{
                break;
            }
        }
        if(r+j*dx > -1 && r+j*dx <8 && c+j*dy > -1 && c+j*dy < 8 ){
            if(table[r+j*dx][c+j*dy] == current){
                for(int b = 0;b<j;b++){
                    table[r+b*dx][c+b*dy] = current;
                }
            }
        }
        table[r][c] = current;
        
    }
}
int main(){
    int k;
    cin >> k;
    for(int i = 0;i<8;i++){
        column[alp[i]] = i;
        for(int j = 0;j<8;j++){
            table[i][j] = '.';
            if((i==3 && j==3) || (i==4 && j==4)){
                table[i][j] = 'O';
            }else if ((i==4 && j==3) || (i==3 && j==4)){
                table[i][j] = 'X';
            }
        }
    }
    for(int a = 0;a<k;a++){
        char cc;
        int r,c;
        cin >> cc >> r;
        r--;
        c = column[cc];
        change(r,c,a%2);
    }
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            cout << table[i][j];
        }
        cout << endl;
    }
    return 0;
}