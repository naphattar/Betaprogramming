#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,c = 1;
    cin >> n;
    if(n == 1){cout << 1 ;return 0;}
    if(n < 4){cout << "NO SOLUTION" << endl;return 0;}
    long long seq[n+1];
    if(n%2 == 0){
        for(int i = n/2;i>=1;i--){
            if(c%2 == 1){
                seq[c] = i;
                seq[n+1-c] = n+1-i;
            }else{
                seq[n+1-c] = i;
                seq[c] = n+1-i;
            }
            c++;
        }
        for(int i = 1;i<=n;i++){
            cout << seq[i] << " ";
        }
    }else{
        cout << n << " ";
        n--;
        for(int i = n/2;i>=1;i--){
            if(c%2 == 1){
                seq[c] = i;
                seq[n+1-c] = n+1-i;
            }else{
                seq[n+1-c] = i;
                seq[c] = n+1-i;
            }
            c++;
        }
        for(int i = 1;i<=n;i++){
            cout << seq[i] << " ";
        }
    }
    return 0;
}