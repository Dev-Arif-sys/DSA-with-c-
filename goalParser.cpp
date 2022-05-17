#include <bits/stdc++.h>
using namespace std;

int main(){
    string command;
    cin >> command;
    string newstr;
    for(int i=0; i<command.size();++i){
        if(command[i]=='('&&command[i+1]==')'){
           newstr.push_back('o');
        }else if(command[i]=='G'){
             newstr.push_back('G');
        }else{
              newstr.push_back(command[i]); 
        }
    }
    cout << newstr;
}