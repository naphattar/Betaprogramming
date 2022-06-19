#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(max(b-a-1,c-b-1),0) << endl;
    return 0;
}