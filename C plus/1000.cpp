#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int l,n;
    bool check = false;
    int count = 0;
    string first;
    string word,result;
    cin >> l ;
    cin >> n ;
    cin >> first;
    if (n==1){
        cout << first << endl;
    }else{
        while(count < n-1){
            int tar = 0;
            cin >> word;
            for (int i = 0;i <l;i++){
                if (first[i] != word[i]){
                    tar++;
                }
            }
            count++;
            if (tar > 2 && !check){
                result = first;
                check = true;
            }
            first = word;
        }
        if (check){
            cout << result << endl;
        }else{
            cout << word << endl;
        }
    }
    return 0;
}