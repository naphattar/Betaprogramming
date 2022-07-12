#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long knight(long long m){
    if(m<2){return 0;}
    return (m*m)*(m*m-1)/2 - 4*(m-1)*(m-2);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for(long long i  = 1;i<=n;i++){
        cout << knight(i) << endl;
    }
    return 0;
}