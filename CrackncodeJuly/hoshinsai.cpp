#include "find_root.h"
#include <functional>
#include <bits/stdc++.h>
int find_root(std::function<double(double)> f) {
    // implement your function here
    int ans = 0;
    long long f1 = f(1);
    long long c = f(0);
    long long f11 = f(-1);
    double a = (f1+f11)/2-c;
    double b = (f1-f11)/2;
    if(a == 0){
        ans = (-1*c)/b;
    }else{
        ans = (-1*b+pow(b*b-4*a*c,0.5))/(2*a);
    }

    return ans;
}