#include <bits/stdc++.h>
using namespace std;

int main(){
    int tar[4] = {1,4,5,2};
    sort(tar,tar+4);
    int i = 0;
    for (i=0;i<4;i++){
        cout << tar[i] << endl;
    }
    return 0;
}

