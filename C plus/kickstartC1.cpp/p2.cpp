#include<bits/stdc++.h>
using namespace std;
int t,n,x,y;

vector<int> p(int n,int sum){
    if(n == 0 || sum == 0){
        vector<int> s = {};
        return s;
    }
    if(n > sum){
        return p(n-1,sum);
    }else{
        vector<int> t = p(n-1,sum-n);
        t.push_back(n);
        return t;
    }
}
int main(){
    cin >> t;
    for(int a = 1;a<t+1;a++){
        cin >> n >> x >> y;
        int sum = (n)*(n+1)/2;
        if(sum%(x+y) == 0){
            int suma = (x)/(x+y)*sum;
            vector<int> result = p(n,suma);
            string results = "";
            for(int i = 0;i<result.size();i++){
                results += result[i]+" ";
            }
            cout << "Case #"<< a << ": " << "POSSIBLE" << endl; 
            cout << result.size() << endl;
            cout << results << endl;
        }else{
           cout << "Case #"<< a << ": " << "IMPOSSIBLE" << endl ; 
        }

    }
    return 0;
}