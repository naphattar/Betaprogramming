#include <iostream>
using namespace std;

int main(){
    int n,a;
    int Min,Max;
    cin >> n;
    cin >> a;
    Min =a;
    Max =a;
    for (int i = 1;i<n;i++){
        int b;
        cin >> b;
        if (b>Max){
            Max = b;
        }
        else if (b<Min){
            Min = b;
        }
    }
    cout << Min << endl;
    cout << Max << endl;
    return 0;

}