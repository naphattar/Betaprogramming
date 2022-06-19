#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    string n;
    int a = 0, b = 0;
    cin >> n;
    int x = n.length();
    for (int i = 0; i<x;i++){
        a += int(n[i]-48);
    
        b += (int(n[i])-48)*(pow(-1,x-i-1));
    }

    while(b<11){
        b = b+11;
    }
    
    a = a%3;
    b = b%11;
    
    cout << a << " " << b << endl;
    return 0;
}