#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    std::cout << std::setprecision(6) << std::fixed;
    int n;
    float result;
    cin >> n;
    if (n%2 == 0){
        result =  n;
    }else if (n==1){
        result = 2;
    }else if (n ==3){
        result = 2+pow(3,0.5);
    }else{
        result = n-3+2*pow(3,0.5);
    }
    cout << result << endl;
    return 0;


}
