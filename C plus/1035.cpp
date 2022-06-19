#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    string n;
    int N;
    cin >> N;
    while (true){
        n = to_string(N);
        bool checkpal = true;
        bool checkprime = true;
        for (int i = 0; i<n.length()/2;i++){
            if (n[i] != n[n.length()-(i+1)] && checkpal){
                checkpal = false;
                
            }
        }

        for (int i = 2;i<floor(pow(N,0.5)+1);i++){
            if (N%i == 0 && checkprime){
                checkprime = false;
                
            }
        }
        if (checkpal && checkprime){
            cout << n;
            break;
            return 0;
        }
        else{
            N++;
        }
    }
    return 0;
}
