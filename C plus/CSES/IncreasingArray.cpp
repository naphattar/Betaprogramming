#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,move = 0;
    cin >> n;
    long long seq[n];
    cin >> seq[0];
    for(int i = 1;i<n;i++){
        cin >> seq[i];
        if(seq[i] < seq[i-1]){
            move += seq[i-1]-seq[i];
            seq[i] = seq[i-1];
        }
    }
    cout << move << endl;
    return 0;
}