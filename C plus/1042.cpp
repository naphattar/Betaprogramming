#include <iostream>
using namespace std;

int main(){
    int n,m,k,x,y,r;
    cin >> n >> m >> k;
    int area [k][2][2];
    for (int i = 0;i<k;i++){
        cin >> x >> y >> r;
        area[i][0][0] = x-r;
        area[i][0][1] = x+r;
        area[i][1][0] = y-r;
        area[i][1][1] = y+r;
    }
    int dx = 0,dy = 0,cx,cy;
    for (x = 0;x< n;x++){
        cx = 0;
        for (int i = 0;i<k;i++){
            if (area[i][0][0] <= x && x <= area[i][0][1]){
                cx++;
            }
        dx = max(dx,cx);
        }
    }
    for (y = 0;y< n;y++){
        cy = 0;
        for (int i = 0;i<k;i++){
            if (area[i][1][0] <= y && y <= area[i][1][1]){
                cy++;
            }
        dy = max(dy,cy);
        }
    }
    cout << max(dx,dy) << endl;
    return 0;
}
