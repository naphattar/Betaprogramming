#include<bits/stdc++.h>
using namespace std;
int n,s,m,t,h,v;
string ans = "";
int numpos[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
map<int,string> data = {{2,"ABC"},{3,"DEF"},{4,"GHI"},{5,"JKL"},{6,"MNO"},{7,"PQRS"},{8,"TUV"},{9,"WXYZ"}};
pair<int,int> getpos(int p){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(numpos[i][j] == p){
                return {i,j};
            }
        }
    }
    return {0,0};
}
int getnum(int p, int h, int v){
    pair<int,int> pos = getpos(p);
    return numpos[pos.first+v][pos.second+h];
}
void getstr(int p ,int m){
    if(p == 1){
        while(!ans.empty() && m>0){
            ans = ans.substr(0,ans.size()-1);
            m--;
        }
        return;
    }
    m--;
    if(p == 7 || p == 9){
        m = m%4;
    }else{
        m = m%3;
    }
    if(data.count(p)){
        string added = data[p];
        added = added.substr(m,1);
        ans = ans+added;
    }
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    cin >> s >> m;
    getstr(s,m);
    n--;
    for(int i = 0;i<n;i++){
        cin >> h >> v >> m;
        s = getnum(s,h,v);
        getstr(s,m);
    }
    if(ans.empty()){
        cout << "null" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}