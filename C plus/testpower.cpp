#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b){
    if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
    long long n;
    cin >> n;
    long long N;
    N = n;
    int k,result;
    result = 0;
    for (int i = 2;i<pow(n,0.5)+1;i++){
        k = 0;
        cout << "i is " << i << endl;
        cout <<" former n is " <<  n << " i is " << i << endl;
        while(n%i == 0 && n > i-1){
            k++;
            if (n%i == 0 && n > i -1){
                n = n/i;
                
            }
        }
        cout << n << " " << k << endl;
        result = gcd(k,result);
    }
    cout << result;
    return 0;  
}