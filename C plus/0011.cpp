#include <iostream>
using namespace std;

int main(){
    int modulo[42] = {0};
    for (int i = 0; i < 10 ; i++){
        int n;
        cin >> n;
        modulo[n%42] = 1;
    }
    int count = 0;
    for (int i=0;i<42;i++){
        if (modulo[i] == 1){
            count+=1;
        }
    }
    cout << count << endl;
    return 0;
}
