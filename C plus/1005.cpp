#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, best = 0 ,sum = 0;
    vector <int> bestseq;
    vector <int> testseq;
    cin >> n;
    int seq[n];
    for (int i = 0;i<n;i++){
        cin >> seq[i];
    }
    for (int i = 0;i<n;i++){
        if (sum+seq[i] >= seq[i]){
            sum = sum+seq[i];
            testseq.push_back(seq[i]);
        }else{
            sum = seq[i];
            testseq.clear();
            testseq.push_back(seq[i]);
        }
        if (best < sum){
            bestseq = testseq;
            best = sum;
        }
    }
    if (bestseq.empty()){
        cout << "Empty sequence" << endl;
    }else{
        for (auto i = bestseq.begin() ; i!= bestseq.end(); ++i){
            cout << *i << " ";
        }
        cout << endl;
        cout << best << endl;
    }
    return 0;
}