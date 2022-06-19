#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b;
    c = pow(a*a+b*b,0.5);
    std::cout << std::setprecision(6) << std::fixed;
    cout << c << endl;
    return 0;

}