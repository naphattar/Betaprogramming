#include<bits/stdc++.h>
using namespace std;
int n,m,a,current;
vector<int> child[1001];
bool visited[1001];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> m;
        for(int j = 0;j<m;j++){
            cin >> a;
            child[i].push_back(a);
        }
    }
    for(int i = 1;i<=n;i++){
        memset(visited,0,1001);
        queue<int> q;
        bool crashed = false;
        visited[i] = true;
        q.push(i);
        while(! q.empty()){
            current = q.front();
            q.pop();
            for( auto c : child[current]){
                if(visited[c]){
                    crashed = true;
                    break;
                }else{
                    visited[c] = true;
                    q.push(c);
                }
            }
        }
        if(crashed){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
    return 0;
}