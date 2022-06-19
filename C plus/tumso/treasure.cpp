#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
long long tar(long long n){
    const float A = pow(2,0.5)-1;
    const float B = 3+2*pow(2,0.5);
    const float a = 1+pow(2,0.5);
    const float b = 1-pow(2,0.5);
    double sum1 = (0.5)*A*(B*pow(a,n)-pow(b,n));
    long long sum2 = floor(sum1);
    return sum2;
    //return sum2%98765431;
}
int main(){
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n;
        cout << tar(n) << endl;
    }
    
    return 0;
    
}