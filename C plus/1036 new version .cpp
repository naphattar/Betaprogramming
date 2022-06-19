#include <iostream>
#include <math.h>
using namespace std;
int equip(int,int,int[],int[],int);
int main(){
    int n,k,p;
    cin >> n >> k;
    int work[n] = {0};
    int price[n] = {0};
    for (int i = 0; i < n ; i++){
        cin >> p;
        price[i] = p;
        for(int j=0;j<k;j++){
            int x;
            cin >> x;
            work[i]+=x*(1<<j);
        }
    }
    cout << equip(n,pow(2,k)-1,work,price,k) << endl;
    return 0;

}
int equip(int m, int ch ,int *W,int *P,int k){  
    if (ch == 0){
        return 0;
    }else if(m == 0){
        return 214748364;
    }else{
        return min(equip(m-1,ch|!(W[m-1]),W,P,k)+P[m-1],equip(m-1,ch,W,P,k));
    }
}