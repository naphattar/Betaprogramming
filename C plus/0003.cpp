#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int table[m][n];
    for (int i =0;i<m;i++){
        for (int j = 0;j<n;j++){
            int a;
            cin >> a;
            table[i][j] = a;
        }
    }
    for (int i =0;i<m;i++){
        for (int j = 0;j<n;j++){
            int a;
            cin >> a;
            table[i][j] = table[i][j]+ a;
        }
    }
    for (int i =0;i<m;i++){
        for (int j = 0;j<n;j++){
            cout << table[i][j]<< " ";
        }
        cout << endl;
        
    }
    return 0;
}

