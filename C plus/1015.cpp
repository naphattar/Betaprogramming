#include<bits/stdc++.h>
using namespace std;
int n,result = 0;
int table[21][21] = {0};
void checktile(int i,int j){
    int check = 0;
    if(table[i][j] == 0) return;
    if(table[i][j] == table[i+1][j+1] || table[i][j] == table[i+1][j-1] || table[i][j] == table[i-1][j+1] || table[i][j] == table[i-1][j-1]) return;
    if(table[i][j] == table[i][j+1] && table[i][j] == table[i+1][j] && table[i][j] != table[i-1][j] && table[i][j] != table[i][j-1]){
        if(table[i][j] != table[i][j+2] && table[i][j] != table[i+2][j]){
            result++;
            return;
        }
    }
    if(table[i][j] != table[i][j+1] && table[i][j] != table[i+1][j] && table[i][j] == table[i-1][j] && table[i][j] == table[i][j-1]){
        if(table[i][j] != table[i][j-2] && table[i][j] != table[i-2][j]){
            result++;
            return;
        }
    }
    if(table[i][j] != table[i][j+1] && table[i][j] == table[i+1][j] && table[i][j] != table[i-1][j] && table[i][j] == table[i][j-1]){
        if(table[i][j] != table[i][j-2] && table[i][j] != table[i+2][j]){
            result++;
            return;
        }
    }
    if(table[i][j] == table[i][j+1] && table[i][j] != table[i+1][j] && table[i][j] == table[i-1][j] && table[i][j] != table[i][j-1]){
        if(table[i][j] != table[i][j+2] && table[i][j] != table[i-2][j]){
            result++;
            return;
        }
    }
}
int main(){
    cin >> n;
    for(int i = 2;i<n+2;i++){
        for(int j = 2;j<n+2;j++){
            cin >> table[i][j];
        }
    }
    for(int i = 2;i<n+2;i++){
        for(int j = 2;j<n+2;j++){
            checktile(i,j);
        }
    }
    cout << result << endl;
    return 0;
}
