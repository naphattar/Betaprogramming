#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a ;
    cin >> b;
    cin >> c;
    if (a+b+c >= 80){
        cout << "A" << endl;
    }
    else if (a+b+c >= 75){
        cout << "B+" << endl;
    }
    else if (a+b+c >= 70){
        cout << "B" << endl;
    }
    else if (a+b+c >= 65){
        cout << "C+" << endl;
    }
    else if (a+b+c >= 60){
        cout << "C" << endl;
    }
    else if (a+b+c >= 55){
        cout << "D+" << endl;
    }
    else if (a+b+c >= 50){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
    return 0;
}