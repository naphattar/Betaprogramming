#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,y,x,ans;
    cin >> t;
    for(int a = 0;a<t;a++){
        cin >> y >> x;
        if(y > x){
            if(y%2 == 0){
                ans = y*y+1-x;
            }else{
                ans = (y-1)*(y-1)+x;
            }
        }else{
            if(x%2 == 0){
                ans = (x-1)*(x-1)+y;
            }else{
                ans = x*x+1-y;
            }
        }
        cout << ans << endl;
    }
    return 0;
}