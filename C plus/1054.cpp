#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,r;
    cin >> n;
    vector<pair<pair<int,int>,int>> tile ;
    int count = 0;
    for (int i = 0;i<n;i++){
        cin >> x >> y >> r;
        pair<int,int> xy ;
        xy.first = x;
        xy.second = y;
        pair<pair<int,int>,int> xyr;
        xyr.first = xy;
        xyr.second = r;
        tile.push_back(xyr);
    }
    sort(tile.begin(),tile.end());
    for (int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(tile[j].first.first-tile[i].first.first >= 20 ){
                break;
            }
            if(pow(tile[i].first.first-tile[j].first.first,2)+pow(tile[i].first.second-tile[j].first.second,2) < pow(tile[i].second+tile[j].second,2)){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}