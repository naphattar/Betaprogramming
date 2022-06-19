#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,m,counter = 0;
    cin >> n >> p;
    m = (n)*(n-1)/2;
    int chem[n][p];
    int want[p];
    int mixed[m][p+2];
    for(int i = 0;i<n;i++){
        for(int j= 0;j<p;j++){
            cin >> chem[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            while(i<j){
                for(int k = 0;k<p;k++){
                    mixed[counter][k] = chem[i][k]+chem[j][k];
                }
                mixed[counter][p+1] = i;
                mixed[counter][p+2] = j;
                counter++;
            }
            j = 0;
        }
    }
    for(int i = 0;i<p;i++){
        cin >> want[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<p;j++){
            if(!(want[j] == chem[i][j])){
                break;
            }else{
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<p;j++){
            if(!(want[j] == mixed[i][j])){
                break;
            }else{
                cout << mixed[i][p+1] << " " << mixed[i][p+2] <<  endl;
                return 0;
            }

        }
    }
    return 0;
}