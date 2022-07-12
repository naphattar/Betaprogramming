#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
vector<string> solution(string s)
{
  int n  = s.size();
  if(n == 0) return {};
  vector<string> result = {};
  if(n%2 != 0){
    s.push_back('_');
    for(int i = 0;i<n ;i = i+2){
      string t = s.substr(i,2);
      result.push_back(t);
    }
  }else{
    for(int i = 0;i<n ;i = i+2){
      string t = s.substr(i,2);
      result.push_back(t);
    }
    
  }
    return result; // Your code here
}
int main(){
    string test;
    cin >> test;
    vector<string> test1 = solution(test);
    for(int i = 0;i<test1.size();i++) cout << test1[i] << " ";
    cout << endl;
    return 0;
}