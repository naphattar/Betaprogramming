#include<bits/stdc++.h>
using namespace std;
int n,m;
struct rect {
    int x1,y1,x2,y2;
};
int isframe(rect r1,rect r2){
    if((r1.x1 <= r2.x1 && r2.x1< r1.x2)||(r1.x1 < r2.x2 && r2.x2 <= r1.x2) || (r2.x1 <= r1.x1 && r1.x1< r2.x2)||(r2.x1 < r1.x2 && r1.x2 <= r2.x2)){
        if((r1.y1 >= r2.y1 && r2.y1 > r1.y2)||(r1.y1 > r2.y2 && r2.y2 >= r1.y2) || (r2.y1 >= r1.y1 && r1.y1 > r2.y2)||(r2.y1 > r1.y2 && r1.y2 >= r2.y2)){return 1;}
    }
    return 0;
}
int main(){
    cin >> n >> m;
    rect r[n];
    for(int i = 0;i<n;i++){
        cin >> r[i].x1 >> r[i].y1 >> r[i].x2 >> r[i].y2;
    }
    for(int i = 0;i<m;i++){
        rect t;
        int ans = 0;
        cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
        for(int j = 0;j<n;j++){
            if(isframe(r[j],t)){ans++;}
        }
        cout << ans << endl;
    }
    return 0;
}
