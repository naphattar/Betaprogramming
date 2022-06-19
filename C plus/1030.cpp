#include <bits/stdc++.h>
using namespace std;
struct Rice{
    double myP;
    double myQ;
};
int compare(Rice r1,Rice r2){
    return r1.myP < r2.myP;
}
int main(){
    std::cout << std::setprecision(3) << std::fixed;
    int k,m,b;
    double p,q,price;
    cin >> k;
    Rice rice[k];
    for (int i = 0;i<k;i++){
        cin >> p >> q;
        rice[i].myP = p/q;
        rice[i].myQ = q;
    }
    sort(rice,rice+k,compare);
    cin >> m;
    for (int i = 0;i<m;i++){
        cin >> b;
        price = 0;
        int start = 0;
        double P,Q;
        while(b>0){
            P = rice[start].myP;
            Q = rice[start].myQ;
            if (b >= Q){
                b -= Q;
                price += (P)*(Q);
                rice[start].myQ = 0;
                start++;
            }else{
                rice[start].myQ -= b;
                price += (P)*b;
                b = 0;
            }
        }
    cout << price << endl;
    }
    return 0;
}