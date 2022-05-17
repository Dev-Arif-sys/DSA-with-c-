#include <bits/stdc++.h>
using namespace std;

int main(){
    string command;
    cin >> command;
    string newstr;
    for(int i=0; i<command.size();){
        if(command[i]=='G'){
             newstr=newstr+'G';
             i=+1;
        
        }else if(command[i+1]==')'){
           newstr +='o';
           i=+2;
        }else{
              newstr=newstr+"al";
              i+=4;
        }
    }
    cout << newstr;
}