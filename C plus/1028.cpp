#include<bits/stdc++.h>
using namespace std;
int value;
char order,v1,v2;
map <char,int> mp;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> order;
    while(order != '!'){
        if(order == '='){
            cin >> v1 >> value;
            mp[v1] = value;
        }else if(order == '#'){
            cin >> v1;
            if(!mp.count(v1)){
                mp[v1] = 0;
            }
            cout << mp[v1] << endl;
        }else if(order == '+'){
            cin >> v1 >> v2;
            if(! mp.count(v1)){
                mp[v1] = 0;
            }
            if(! mp.count(v2)){
                mp[v2] = 0;
            }
            mp[v1] = mp[v1]+mp[v2];
        }else if(order == '-'){
            cin >> v1 >> v2;
            if(! mp.count(v1)){
                mp[v1] = 0;
            }
            if(! mp.count(v2)){
                mp[v2] = 0;
            }
            mp[v1] = mp[v1]-mp[v2];
        }else if(order == '*'){
            cin >> v1 >> v2;
            if(! mp.count(v1)){
                mp[v1] = 0;
            }
            if(! mp.count(v2)){
                mp[v2] = 0;
            }
            mp[v1] = mp[v1]*mp[v2];
        }else if(order == '/'){
            cin >> v1 >> v2;
            if(! mp.count(v1)){
                mp[v1] = 0;
            }
            if(! mp.count(v2)){
                mp[v2] = 0;
            }
            mp[v1] = mp[v1]/mp[v2];
        }
        cin >> order;
    }
    cout << "!" << endl;
    return 0;
}