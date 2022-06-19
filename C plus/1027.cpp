#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> score;
    string member = "ABCDEFG";
    for(int i = 0;i<member.size();i++){
        score.push_back({0,-1*i});
    }
    string vote;
    cin >> vote;
    while (vote != "!"){
        for (int i = 0;i<vote.size();i++){
            for (int j = 0;j<score.size();j++){
                if(vote[i]-'A' == -1*score[j].second){
                    score[j].first ++ ;
                }
            }
        }
        sort(score.begin(),score.end());
        //if (score.size() == 1){
            //break;}else 
        if (score.size() > 0 && score[0].first < score[1].first){
            score.erase(score.begin());
        }
        cin >> vote;
    }
    cout << score.size() << endl;
    
    for (int i = score.size()-1;i>-1;i = i-1){
        cout << member[-1*score[i].second] << " " << score[i].first << endl;

    }
    return 0;
}