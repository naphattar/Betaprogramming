#include<bits/stdc++.h>
using namespace std;
int n,y,result;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for(int i = 0;i<n;i++){
        bool isone = true;
        result = 1;
        cin >> y;
        for(int j = 2;j <= sqrt(y);j++){
            result = 0;
            int test = y;
            while(test%j == 0){
                result++;
                test = test/j;
            }
            if(test == 1){
                cout << result << endl;
                isone = false;
                break;
            }
        }
        if(isone){
            cout << "NO" << endl;
        }
    }
    return 0;
}