#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int ans = 0;
    for(int i = 1;i<=18;i++){
        int exp = n/pow(5,i);
        ans += exp;
    }
    cout <<  ans << endl;
    return 0;
}
