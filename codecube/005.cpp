#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a ,long long b){
    if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
    int n;
    long long a,b;
    for(int i = 0;i<n;i++){
        cin >> a
    }
    cout << a*b/(gcd(a,b)) << endl;
    return 0;
}