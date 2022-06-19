#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    int domino[n] = {};
    int height[n] = {};
    int left[n] ={};
    int right[n] = {};
    for(int i = 0;i<n;i++){
        cin >> domino[i] >> height[i];
    }
    for(int i = 1;i<n;i++){
        bool check = true;
        for(int j = i-1;j>=0 && check;j--){
            if(domino[j] > domino[i]-height[i]){
                left[i] = max(left[i],left[j]+i-j);
            }else check = false;
            
        }
    }
    for(int i = n-2;i>-1;i--){
        bool check = true;
        for(int j = i+1;j<n && check;j++){
            if(domino[j] < domino[i]+height[i]){
                right[i] = max(right[i],right[j]+j-i);
            }else check = false;
            
        }
    }
    int maxl = 0,maxr = 0,bestl = 1,bestr = 1;
    for(int  i = 0;i<n;i++){
        if(left[i] > maxl){
            maxl = left[i];
            bestl = i+1;
        }
        if(right[i] > maxr){
            maxr = right[i];
            bestr = i+1;
        }
    }
    if(maxl > maxr){
        cout << bestl << " L" << endl;
    }else if(maxr > maxl){
        cout << bestr << " R" << endl;
    }else{
    if(bestl <= bestr){
        cout << bestl  <<  " L" << endl;
    }else cout << bestr << " R" << endl;
    }
    return 0;
}