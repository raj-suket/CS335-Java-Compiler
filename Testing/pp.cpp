#include <bits/stdc++.h>
using namespace std;

bool check_T(string s){
    bool flag = true;
    for(char c:s){
        if(c<='Z' && c>='A'){

        }else{
            flag = false;
        }
    }    
    return flag;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("tokens.txt", "w", stdout);

    set<string> T, NT;

    string s;
    while(cin>>s){
        if(s!="END" && s!="EOL"){
            if(check_T(s)){
                T.insert(s);
            }else{
                NT.insert(s);
            }
        }
    }

    for(auto i:T){
        cout<<"%token<str_val> "<<i<<'\n';
    }cout<<'\n';
    for(auto i:NT){
        cout<<"%type<str_val> "<<i<<'\n';
    }cout<<'\n';

    return 0;
}