#include <iostream>
using namespace std;
int main(){
    int n,m;
    char ch; 
    cin >> n >> m;
    char data[n][m];
    int rock[m];
    for (int j = 0;j<m;j++){
        rock[j] = n;
    }
    for (int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> ch;
            if (ch == 'O'){
                rock[j] = min(rock[j],i);
                data[i][j] = 'O';
            }else{
                data[i][j] = '.';
            }
        }
    }
    int brick[m];
    int resultpos[n][m];
    for (int j = 0;j<m;j++){
        cin >> brick[j];
        brick[j] = min(brick[j],rock[j]);
    }
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            if (rock[j]-brick[j]-1 < i  && i < rock[j]){
                data[i][j] = '#';
            }
            cout << data[i][j];
            if (j == m-1){
                cout << endl;
            }
        }
    }

    return 0;
}