#include<bits/stdc++.h>
using namespace std;
int findv2(int n){
    int result = 0;
    while(n%2 == 0 && n>1){
        result++;
        n = n/2;
    }
    return result;
}
int main(){
    long long n;
    int k,output = 0;
    cin >> k >> n;
    for(int i = 1;i<n+1;i++){
        output += findv2(i)+1;
    }
    cout << output << endl;
    return 0;
}