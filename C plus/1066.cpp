#include<bits/stdc++.h>
using namespace std;
int n,diff = 0,m = 0,energy = 0;
vector<int> seq;
int main(){
    cin >> n;
    cin >> seq[0];
    for(int i = 1;i<n;i++){
        cin >> seq[i];
        if(seq[i]-seq[i-1] > diff){diff = seq[i]-seq[i-1];m = i-1;}
    }



    return 0;
}