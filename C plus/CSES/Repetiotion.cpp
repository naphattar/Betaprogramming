#include<bits/stdc++.h>
using namespace std;
int main(){
    string dna;
    cin >> dna;
    long long ans = 0,maxans = 0;
    char prev = dna.at(0);
    for(char c : dna){
        if(c == prev){
            ans++;
        }else{
            prev = c;
            if(ans > maxans){maxans = ans;}
            ans = 1;
        }
    }
    if(ans > maxans){maxans = ans;}
    cout << maxans << endl;
    return 0;
}