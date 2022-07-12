#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin >> n;
    int found[n] = {};
    for(int i = 0;i<n-1;i++){cin >> k;found[k-1] = 1;}
    for(int i = 0;i<n;i++){
        if(!found[i]){cout << i+1 << endl;}
    }
    return 0;
}