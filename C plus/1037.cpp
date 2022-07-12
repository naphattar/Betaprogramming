#include<bits/stdc++.h>
using namespace std;
int r,c;
char table[50][50];
vector<pair<int,int>> water;
pair<int,int> dis = {{-1,0},{1,0},{0,-1},{0,1}};
bool watervalid(int a,int b){
    if( a < 0 || a >= r || b < 0 || b >= c){
        return false;
    }
    if(table[a][b] == 'X' || table[a][b] == 'S' || table[a][b] == 'D'){
        return false;
    }
    return true;
}
int main(){
    cin >> r >> c;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            char pos;
            cin >> pos;
            if(pos == '*'){
                water.push_back({r,c});
            }   
        }
    }
    while(true){
        for( auto pos : water){
            int posx = pos.first;
            int posy = pos.second;
            for(auto posd : dis){
                if(watervalid(posx+posd.first,posy+posd.second)){
                    table[posx+posd.first][posy+posd.second] = '*';
                    water.push_back({posx+posd.first,posy+posd.second});
                }
            }
        }
    }



    return 0;
}