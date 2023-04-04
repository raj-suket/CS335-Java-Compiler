#include<bits/stdc++.h>
#include"symbol_table.h"

using namespace std;

bool is_prefix(vector<int> a, vector<int> &b)
{
    if(a.size()>b.size())
    {
        return 0;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}
int lookup(string name){
    for(int i = 0; i < sym_table.size(); i++){
        if(sym_table[i].first == name){
            return i;
        }
    }
    return -1;
}

int lookup_scope(string name, vector<int> current_scope){
    for(int i = 0; i < sym_table.size(); i++){
        if(sym_table[i].first == name && is_prefix(sym_table[i].second.scope, current_scope)){
            return i;
        }
    }
    return -1;
}

void insert(string name, vector<int> &scope, int lineno, int type, vector<string> type_args)
{

    for(int i = 0; i < sym_table.size(); i++){
        if(sym_table[i].first == name && sym_table[i].second.scope == scope){
            cerr<<"Redeclaration error at line number: " << lineno <<endl;
            exit(0);
        }
    }

    tab_item *t = new tab_item;
    t->lines = lineno;
    t->scope = scope;
    t->type = type;
    t->type_args = type_args;
    sym_table.push_back(make_pair(name, *t));
}

int scope_check(string name, vector<int> &scope)
{
    for(int i = 0; i < sym_table.size(); i++){
        if(name == sym_table[i].first){
            if(is_prefix(sym_table[i].second.scope, scope)){
                return i;
            }
        }
    }
    cerr << "Variable not declared to be used in this scope\n";
    return -1;
}

void table_dump(){
    ofstream of;
    string out_file = "Symbol_Table.txt";
    of.open(out_file.c_str());
    for(int i = 0; i < sym_table.size(); i++){
        of << "Identifier name: " << sym_table[i].first << endl;
        of << "\t Type: " << sym_table[i].second.type << endl;
        of << "\t Line Number: " << sym_table[i].second.lines << endl;
        of << "\t Scope: ";
        for(auto j : sym_table[i].second.scope) of << j;
        of << endl;
        of << "\t Types of Args: ";
        for(auto j : sym_table[i].second.type_args) of << j << " ";
        of << endl << endl;
    }
    of.close();

}

