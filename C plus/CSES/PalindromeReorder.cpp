#include<bits/stdc++.h>
using namespace std;
string word;
string w1 = "",w2 = "",w3 = "";
map<string,int> mp;
int main(){
    cin >> word;
    int count = 0;
    for(long long i = 0;i<word.size();i++){
        if(mp.count(word.substr(i,1))){
            mp[word.substr(i,1)]++;
        }else{
            mp[word.substr(i,1)] = 1;
        }
    }
    bool unused = true;
    auto iter = mp.begin();
    while( iter != mp.end()) {
        string w = iter-> first;
        if(mp[w]%2 == 1){
            if(!unused){
                cout <<"NO SOLUTION" << endl;
                return 0;
            }else{
                for(long long j = 0;j<mp[w];j++){w3 = w3+w;}
                unused = false;
            }
        }else{
        for(long long j = 0;j<mp[w]/2;j++){
            w1 = w1 + w;
            w2 = w+w2;
        }
        }
        iter++;
    }
    cout << w1 << w3 << w2 << endl;
    return 0;
}