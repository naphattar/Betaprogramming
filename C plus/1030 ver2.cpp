#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int k,m,b;
    double p,q,price;
    cin >> k;
    pair <float,float> rice[k];
    for (int i = 0;i<k;i++){
        cin >> p >> q;
        rice[k].first = p/q;
        rice[k].second = q;
    }
    sort(rice,rice+k);
    cin >> m ;
    int start = 0;
    for (int i = 0;i<m;i++){
        cin >> b;
        price = 0;
        while(b > 0){
            if (b >= rice[start].second){
                b -= rice[start].second;
                price += (rice[start].first)*(rice[start].second);
                rice[start].second = 0;
                start++;
            }else{
                rice[start].second -= b;
                price += (rice[start].first)*b;
                b = 0;
                
            }
        }
        printf("%.3f\n",price);
    }
    return 0;
}
