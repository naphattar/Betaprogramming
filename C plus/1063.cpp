#include<bits/stdc++.h>
using namespace std;
int n,c;
char a,b;
map<pair<char,char>,vector<int>> mp;

float median(vector<int> v){
    if(v.size()%2 == 0){
        return (v[v.size()/2-1]+v[v.size()/2])/2;
    }
    return (float)v[(v.size()-1)%2];
}
int main(){
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a >> b >> c;
        
    }



    return 0;
}