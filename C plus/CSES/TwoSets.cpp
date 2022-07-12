#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    set<int> s1,s2;
    cin >> n;
    if(n%4 == 1 || n%4 == 2){cout << "NO" << endl;return 0;}
    cout << "YES" << endl;
    if(n%4 == 0){
        for(int i= 1;i<=n/4;i++){
            s1.insert(i);
            s1.insert(n+1-i);
            s2.insert(i+n/4);
            s2.insert(n+1-i-n/4);
        }
    }
    if(n%4 == 3){
        int k = (n-3)/4;
        for(int i = 1;i<=k;i++){
            s1.insert(i);
            s1.insert(n-i);
            s2.insert(i+k);
            s2.insert(n-i-k);
        }
        s1.insert(2*k+1);
        s1.insert(2*k+2);
        s2.insert(n);
    }
        cout << s1.size() << endl;
        for (auto it = s1.begin(); it !=s1.end(); ++it){
            cout << ' ' << *it;
        }
        cout << endl;
        cout << s2.size() << endl;
        for (auto it = s2.begin(); it !=s2.end(); ++it){
            cout << ' ' << *it;
        }
        cout << endl;
    return 0;
}