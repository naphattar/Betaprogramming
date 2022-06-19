#include <iostream>
using namespace std;

int main(){
    int dwarf[9];
    int i = 0,x = 0;
    int sum = 0;
    for(i = 0 ;i < 9 ;i++){
        cin >> x;
        dwarf[i] = x;
        sum += x;
    }
    int a=0,b=1;
    for(a = 0;a<8;a++){
        for (b = a+1 ;b<9;b++){
            if (sum-dwarf[a]-dwarf[b] == 100){
                for (i = 0;i<9;i++){
                    if((i!= a) && (i!=b)){
                        cout << dwarf[i] << endl;
                    }
                }
            }
        }
    }

    return 0;
}

