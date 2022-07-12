#include<bits/stdc++.h>
using namespace std;
int n,p,q;
vector<int> data = {};
vector<int> goal = {};
map<vector<int>,int> num;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n >> p;
    for(int i = 1;i<n+1;i++){
        data.clear();
        for(int j = 0;j<p;j++){
            cin >> q;
            data.push_back(q);
        }
        num[data] = i;
    }
    data.clear();
    for(int i = 0;i<p;i++){
        cin >> q;
        goal.push_back(q);
    }
    if(num.count(goal)){
        cout << num[goal] << endl;
    }else{
        bool found = false;
        for(auto x : num){
            data = x.first;
            int a = x.second;
            vector<int> temp = goal;
            for(int i = 0;i<p;i++){
                temp[i] = goal[i]-data[i];
            }
            if(num.count(temp) && a != num[temp]){
                if(a < num[temp]) cout << a << " " << num[temp] << endl;
                else cout << num[temp] << " " << a << endl;
                found = true;
            }
        }
        if(! found){
            cout << "NO" << endl;
        }
    }
    return 0;
}