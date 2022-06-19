#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b){
    if (b == 0){
        return a;
    }
   return gcd(b, a % b);
}
int power(int n){
    int N = n;
    int k,result;
    result = 0;
    k = 0;
    for (int i = 2;i < pow(N,0.5)+1;i++){
        k = 0;
        while (n%i == 0 && n > 1){
            k++;
            n = n/i;
        }
        result = gcd(result,k);
        if(result == 1){
            return result;
        }
    }
    
    return result;  
}
int main(){
    int n,k,m;
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> m;
        k = power(m);
        if (k > 1){
            cout << k << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}