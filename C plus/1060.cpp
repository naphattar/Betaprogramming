#include<bits/stdc++.h>
using namespace std;
char mountain[82][82];
pair<int,int> sh[21];
int n,s,h,lef;
int righ = 1;
int top = 0;
int main(){
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> s >> h;
        sh[i] = make_pair(s,h);
        top = max(top,h);
        righ = max(righ,s+2*h-1);
    }
    sort(sh,sh+n);
    //set up plain
    for(int i = 0;i<top;i++){
        for(int j = 0;j<righ;j++){
            mountain[i][j] = '.';
        }
    }
    //draw mountain
    for(int m = 0;m<n;m++){
        s = sh[m].first-1 , h = sh[m].second;
        for(int j = s;j<s+h;j++){
            for(int i = top-1;i>top-1-j+s;i--){
                mountain[i][j] = 'X';
            }
            if(!(mountain[top-1-j+s][j] == 'X')){
                if(mountain[top-1-j+s][j] == '\\'){
                    mountain[top-1-j+s][j] = 'v';
                }else{
                    mountain[top-1-j+s][j] = '/';
                }
            }
        }
        for(int j = s+h;j<s+2*h;j++){
            for(int i = top-1;i>top-1-s-2*h+j+1;i--){
                mountain[i][j] = 'X';
            }
            mountain[top-1-s-2*h+j+1][j] = '\\';
        }
    }
    //print mountain
    for(int i = 0;i<top;i++){
        for(int j = 0;j<righ;j++){
            cout << mountain[i][j];
        }
        cout << endl;
    }
    return 0;
}