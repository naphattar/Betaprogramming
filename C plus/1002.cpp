#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,I =0,V=0,X=0,L=0,C=0;
    int C_check,L_check,X_check,V_check,I_check;
    cin >> n;
    for (int i = 1; i < n+1 ;i++){
        int j = i;
        C_check = floor(i/100);
        C += C_check;
        i = max(i- C_check*100,0);
        if (i >= 90){
            X++;
            C++;
            i -= 90;
        }
        L_check = floor(i/50);
        L += L_check;
        i = max(i-L_check*50,0);
        if (i >= 40){
            X++;
            L++;
            i -= 40;
        }
        X_check = floor(i/10);
        X += X_check;
        i = max(i-X_check*10,0);
        if (i >= 9){
            X++;
            I++;
            i -= 9;
        }
        V_check = floor(i/5);
        V += V_check;
        i = max(i-V_check*5,0);
        if (i >= 4){
            I++;
            V++;
            i -= 4;
        }
        I_check = i;
        I += I_check;
        i = j;
    }
    cout << I << " " << V << " " << X << " " << L << " " << C << endl;
    return 0;
}