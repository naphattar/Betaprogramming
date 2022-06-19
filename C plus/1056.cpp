#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans = 0,t,remain;
    cin >> n >> k;
    int time[n];
    for(int i = 0;i<n;i++){
        cin >> time[i];
    }
    remain = n%k;
    sort(time,time+n);
    ans = time[remain-1];
    for(int i = k+remain-1;i<n;i = i+k){
        ans = ans + time[i];
    }
    cout << ans << endl;
    return 0;
}