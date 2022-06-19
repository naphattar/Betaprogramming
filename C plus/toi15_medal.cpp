#include<bits/stdc++.h>
using namespace std;
int n;
long long sum;
int main(){
    cin >> n;
    int t[n],h[n],f[n];
    for(int i = 0;i<n;i++) cin >> t[i];
    for(int i = 0;i<n;i++) cin >> h[i];
    sort(t,t+n);
    sort(h,h+n);
    for(int i = 0;i<n;i++) f[i] = h[i]+t[n-i];
    for(int i = 0;i<n;i++) cout << f[i] << " ";
    cout << endl;
    for(int i = 0;i<n-1;i++) sum += f[i+1]-f[i];
    cout << sum << endl;
    return 0;
}