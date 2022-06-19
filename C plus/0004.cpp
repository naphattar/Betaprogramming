#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word ;
    int n = word.length();
    int i = 0;
    int count = 0;
    for (i = 0 ; i < n ; i++){
        if (word[i] == tolower(word[i])){
            count++;
        }
    }
    if(count == n){
        cout << "All Small Letter" << endl;
    }else if (count == 0){
        cout << "All Capital Letter" << endl;
    }else{
        cout << "Mix" << endl;
    }
    
    

    return 0;
}
