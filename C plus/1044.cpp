#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,best = 0,tryrow,trycol;
    cin >> n >> m;
    int area[n][m],road[n][m];
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            cin >> area[i][j];
        }
    }
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            cin >> road[i][j];
        }
    }
    tryrow = 0;
    for (int i = 1;i<n;i++){
        for (int j = 0;j<m;j++){
            if(i == 1){
                tryrow += area[i][j] + road[i][j];
            }else{
                tryrow += area[i][j];
            } 
        }    
    } 
    best = max(best,tryrow);

    tryrow = 0;
    for (int i = 0;i<n-1;i++){
        for (int j = 0;j<m;j++){
            if(i == n-2){
                tryrow += area[i][j] + road[i][j];
            }else{
                tryrow += area[i][j];
            } 
        }    
    } 
    best = max(best,tryrow);

    for (int k = 1;k<n-1;k++){
        tryrow = 0;
        for (int i = 0;i<n;i++){
            if(i!= k ){
                for (int j = 0;j<m;j++){
                    if(i == k-1 || i == k+1){
                        tryrow += area[i][j]+road[i][j];
                    }else{
                        tryrow += area[i][j];
                    }
                }
                best = max(best,tryrow);  
            }
        }  
        
    }
    trycol = 0;
    for (int j = 1;j<m;j++){
        for (int i = 0;i<n;i++){
            if(j == 1){
                trycol += area[i][j] + road[i][j];
            }else{
                trycol += area[i][j];
            } 
        }    
    } 
    best = max(best,trycol);

    trycol = 0;
    for (int j = 0;j<m-1;j++){
        for (int i = 0;i<n;i++){
            if(j == m-2){
                trycol += area[i][j] + road[i][j];
            }else{
                trycol += area[i][j];
            } 
        }    
    } 
    best = max(best,trycol);

    for (int k = 1;k<m-1;k++){
        trycol = 0;
        for (int j = 0;j<m;j++){
            if(j!= k ){
                for (int i= 0;i<n;i++){
                    if(j == k-1 || j == k+1){
                        trycol += area[i][j]+road[i][j];
                    }else{
                        trycol += area[i][j];
                    }
                }
                best = max(best,trycol);  
               
            }
        }    
    }
    cout << best << endl;
    return 0;
}