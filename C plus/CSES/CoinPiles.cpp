#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long a,b;
    for(int i = 0;i<t;i++){
        cin >> a >> b;
        if(2*a>= b && 2*b >= a){
            if((2*a-b)%3 == 0 && (2*b-a)%3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
}