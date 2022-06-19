#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,currentplayer = 0,dice,currentdart = 0,deletedart;
    cin >>  n >> k;
    int player[k] = {};
    int score[n] = {};
    vector<int> dart;
    for(int i = 0;i<n;i++){
        dart.push_back(i+1);
        cin >> score[i];
    }
    while(! dart.empty()){
        //cout << "currentplayer is " << currentplayer << " and size is " << dart.size() << endl;
        cin >> dice;
        currentdart = (currentdart+dice)%(dart.size());
        player[currentplayer] += score[dart[currentdart]-1];
        deletedart = currentdart;
        if(currentdart == dart.size()-1){
            currentdart = 0;
        }
        dart.erase(dart.begin()+deletedart,dart.begin()+deletedart+1);
        currentplayer = (currentplayer+1)%k;
    }
    for(int i = 0 ;i<k;i++){
        cout << player[i] << endl;
    }
    
    return 0;
}