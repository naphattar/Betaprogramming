#include<bits/stdc++.h>
using namespace std;
int n,q,a,b,c,d;
string test,sample;
int main(){
    cin >> n >> q;
    cin >> test;
    for(int i = 0;i<q;i++){
        sample = "";
        cin >> a >> b >> c >> d;
        int l = b-a+d-c+2;
        for(int j =a;j<b+1;j++){
            sample = sample+test[j-1];
        }
        for(int j =c;j<d+1;j++){
            sample = sample+test[j-1];
        }
        int midl = (int) l/2;
        bool result = true;
        for(int j =1;j<midl+1;j++){
            if(sample[j-1] != sample[l-j]){
                result = false;
                break;
            }
        }
        //cout << sample << endl;
        if(result){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }


    return 0;
}