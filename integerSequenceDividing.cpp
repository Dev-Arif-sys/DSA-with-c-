#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;
    sum= n*(n+1)/2;
    cout << sum << endl;
    if(sum==0 || sum==3){
        cout << 0 ;
    }else{
        cout << sum%2 ;
    }
}