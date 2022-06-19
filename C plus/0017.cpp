#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int side[4] = {a,b,c,d};
    sort(side,side+4);
    cout << side[2]*side[0] << endl;
    return 0;
}