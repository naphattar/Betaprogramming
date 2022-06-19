#include<bits/stdc++.h>
using namespace std;
int n,k,currentplayer,counter;
pair<int,int> current[4];
pair<int,int> score[4];
int table[100][100];

bool equaling (pair<int,int> p1,pair<int,int> p2){
    return (p1.first == p2.first && p1.second == p2.second);
}
void move(char direction,int player){
    bool work = true;
    int x = current[player-1].first , y = current[player-1].second;
    if(direction == 'N'){
        x--;
        if(x<0){
            work = false;
        }
        pair<int,int> newpos = make_pair(x,y);
        for(int i = 0;i<4;i++){
            if(equaling(current[i],newpos)){
                work = false;
            }
        }    
    }else if(direction == 'S'){
        x++;
        if(x>n-1){
            work = false;
        }
        pair<int,int> newpos = make_pair(x,y);
        for(int i = 0;i<4;i++){
            if(equaling(current[i],newpos)){
                work = false;
            }
        }
    }else if(direction == 'E'){
        y++;
        if(y > n-1){
            work = false;
        }
        pair<int,int> newpos = make_pair(x,y);
        for(int i = 0;i<4;i++){
            if(equaling(current[i],newpos)){
                work = false;
            }
        }
    }else if(direction == 'W'){
        y--;
        if(y<0){
            work = false;
        }
        pair<int,int> newpos = make_pair(x,y);
        for(int i = 0;i<4;i++){
            if(equaling(current[i],newpos)){
                work = false;
            }
        }
    }
    if(work){
        current[player-1] = make_pair(x,y);
        table[x][y] = player;
        //cout << player << " is move to " << x << " and " << y << endl;
    }
}
int main(){
    cin >> n >> k;
    char path[4][k];
    for(int i = 0;i<4;i++){
        score[i] = make_pair(0,i);
    }
    table[0][n-1] = 1;
    table[n-1][n-1] =2;
    table[n-1][0] =3;
    table[0][0] =4;
    current[0] = make_pair(0,n-1);
    current[1] = make_pair(n-1,n-1);
    current[2] = make_pair(n-1,0);
    current[3] = make_pair(0,0);
    for(int i = 0;i<4;i++){
        for(int j = 0;j<k;j++){
            cin >> path[i][j];
        }
    }
    for(int i = 0;i<k;i++){
        for(int j = 1;j<5;j++){
            move(path[j-1][i],j);
        }
    }
   
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(table[i][j] > 0){
                score[table[i][j]-1] = make_pair(score[table[i][j]-1].first+1,table[i][j]-1);
                counter++;
            }
        }
    }
   
    if(counter < pow(n,2)){
        cout << "No" << endl;
    }else{
        vector<int> winner= {};
        sort(score,score+4);
        int maxscore = score[3].first;
        for(int i = 0;i<4;i++){
            if(score[i].first == maxscore){
                winner.push_back(score[i].second+1);
            }
        }
        cout << winner.size() << " " << maxscore << endl;
        for(int i = 0;i<winner.size();i++){
            cout << winner[i] << endl;
        }
    }
    return 0;
}