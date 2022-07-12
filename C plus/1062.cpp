#include<bits/stdc++.h>
using namespace std;
short l,k;
char m1[127],m2[127],ch[127];
int main(){
    cin >> l >> k;
    for(int i = 0;i<l;i++){cin >> m1[i];}
    for(int i = 0;i<l;i++){cin >> m2[i];}
    for(int i = 0;i<k;i++){cin >> ch[i];}
    for(int i = 0;i<k;i++){
        for(int j = 0;j<l;j++){
            char sk[3] = {m1[j],m2[j],ch[i]};
            sort(sk,sk+3);
            ch[i] = sk[1];
        }
    }
    for(int i = 0;i<k;i++){cout << ch[i];}
    cout << endl;
    return 0;
}