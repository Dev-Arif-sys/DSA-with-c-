#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
    int N;
    cin >> N;
    
    for (  int i=1 ; i<=N ; ++i ){
       for(int j=1;j<=N*2;++j ){
           if( j<=i || j >(N*2-i)){
               cout << "*"; 
           }else{
               cout << "#"; 
           }
       }
       cout << endl;
    }
    }
}