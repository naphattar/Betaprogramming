#include<bits/stdc++.h>
using namespace std;
int n,p;
vector<int>plus(vector<int> v1, vector<int> v2){
    if(v1.empty()){
        return v2;
    }
    if(v2.empty()){
        return v1;
    }
    vector<int> result = {};
    for(int i = 0;i<v1.size();i++){
        result.push_back(v1[i]+v2[i]);
    }
    return result;
}
int main(){
    cin >> n >> p;
    vector<int> data[n][n];
    vector<int> goal = {};
    for(int i = 0;i<n;i++){
        
    }
}