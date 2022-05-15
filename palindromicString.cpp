#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int flag=0;
    
    for (int i = 0; i < S.length() / 2; i++) {
 
       
        if (S[i] != S[S.length() - i - 1]) {
          flag=1;
          break;
            
        }
    }
  
  if(flag){
    cout << "NO";
  }else{
      cout << "YES";
  }
    
}