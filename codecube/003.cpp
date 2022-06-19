#include<bits/stdc++.h>
using namespace std;
long gcd(long a ,long b){
    if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
    long a,b;
    cin >> a;
    cin >> b;
    cout << a*b/(gcd(a,b)) << endl;

}