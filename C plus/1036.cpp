#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,price,done,x;
    cin >> n >> k;
    vector <int> work;
    work.push_back(0);
    for (int i = 1;i<pow(2,k)+1;i++){
        work.push_back(2e9);
    }
    for (int i = 0;i<n;i++){
        cin >> price;
        done = 0;
        for (int j = 0;j<k;j++){
            cin >> x;
            done += x*(1<<j);
        }
        for (int j = 0;j<pow(2,k)+1;j++){
            work[j|done] = min(work[j|done],work[j]+price);
        }
    
    }
    cout << work[pow(2,k)-1] << endl;
    return 0;
}
