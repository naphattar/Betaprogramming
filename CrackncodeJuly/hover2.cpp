#include "find_root.h"
#include <functional>
#include <bits/stdc++.h>
int find_root(std::function<double(double)> f) {
    // implement your function here
    int ans = 0;
    double f0 = f(0);
    for(int i = 2;i<11;i++){
        ans = (-1)*pow(f0,1/i);
        if(f(ans) == 0){return ans;}
    }
    return ans;
}