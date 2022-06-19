#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,m,b;
    double price = 0,q,p;
    vector <pair<double,double>> rice;
    cin >> k;
    for (int i = 0;i<k;i++){
        cin >> p >> q;
        rice.push_back({p/q,q});
    }
    int start = 0;
    sort(rice.begin(),rice.end());
    cin >> m;
    for (int i = 0;i<m;i++){
        cin >> b;
        price = 0;
        while(b > 0){
            if (rice[start].second >= b){
                rice[start].second -= b;
                price += b*rice[start].first;
                b = 0;
            }else{
                b-= rice[start].second;
                price += rice[start].first*rice[start].second;
                start++;
            }
        }
        printf("%.3f\n",price);
        

    }


    return 0;
}