#include <iostream>
#include<bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    int n;
    int j;
    char order;
    cin >> n;
    priority_queue <int> data;
    for (int i = 0;i < n;i++){
        cin >> order;
        if (order == 'P'){
            cin >> j;
            data.push(j);
        }
        else if (order == 'Q') {
            if (data.size() == 0){
                cout << "-1" << endl;
            }else{
                cout << data.top() << endl;
                data.pop();
            }
        }
    }
    return 0;
}