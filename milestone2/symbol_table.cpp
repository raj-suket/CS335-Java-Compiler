#include "symbol_table.h"

void insert(string name, int type, int lineno){
    // not present in the table
    sym_table[name].type = type;
    sym_table[name].lines.push_back(lineno);
    // sym_table[name].scope = current_scope;
}

tab_item* lookup(string name){
    if(sym_table[name].type == -1) return NULL;
    else return &(sym_table[name]);
}

tab_item* lookup_scope(string name, int scope){
    if(sym_table[name].type == -1) return NULL;

    else return &(sym_table[name]);
}



void table_dump(){
    for(auto i:sym_table){
        tab_item t = i.second;

        for(auto l:t.lines){
            cout << i.first << "\t\t" << t.type << "\t\t" << l << endl;
        }
    }
}