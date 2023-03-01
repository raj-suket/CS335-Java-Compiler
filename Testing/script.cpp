#include <bits/stdc++.h>
using namespace std;

string s, t, p;

struct Node{
    string val;
    vector<Node*> children;
};

Node* createnode (string & val, vector<Node*> & children){
    Node * temp = new Node;
    temp->val = val;
    for(int i=0;i<children.size();i++){
        temp->children.push_back(children[i]);
    }
    return temp;
}

Node* root;

vector<Node*> emp;
vector<Node*> vec;

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
    freopen("output.txt", "w", stdout);

    while(cin>>p){
        cin>>s>>t;
        cout<<p<<":"<<'\n';
        bool flag = true;
        while(t != "END"){
            vector<string> v(1, t);
            cin>>s;
            while(s!="EOL"){
                v.push_back(s);
                cin>>s;
            }
            if(flag){
                flag=false;
                cout<<"\t";
            }else{
                cout<<"|\t";
            }
            for(auto i:v){
                cout<<i<<" ";
            }

            cout<<"\t\t\t\t\t\t\t\t\t\t";
            string arg="{";
            // createnode("PUBLIC (" + $1->val + ")",)
            for(int i=0;i<v.size();i++){
                if(check_T(v[i])){
                    arg+=("createnode(\"");
                    arg+=v[i];
                    arg+="__\" + *$";
                    arg+=to_string(i+1);
                    arg+=" , emp";
                    arg+=("),");
                }else{
                    arg+=("$");
                    arg+=to_string(i+1);
                    arg+=",";
                }
            }
            if(p == "CompilationUnit"){
                cout<<"{vec = " << arg.substr(0, arg.size()-1) << "}; root = createnode("<<"\""<<p<<"\", vec);}"<<"\n";
            }else{
                cout<<"{vec = " << arg.substr(0, arg.size()-1) << "}; $$ = createnode("<<"\""<<p<<"\", vec);}"<<"\n";
            }
            cin>>t;
        }cin>>t;
        cout<<"\t;\n\n";
    }

    return 0;
}