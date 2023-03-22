#include "bits/stdc++.h"
using namespace std;

typedef struct tab_item{
    // int offset;
    int lines;
    vector<int> scope;
    int type;

    // in case the item is for a function entry
    vector<string> type_args;
}tab_item;

static vector<pair<string, tab_item> > sym_table;

void insert(string name, vector<int> &scope, int lineno, int type, vector<string> type_args);

int lookup(string name);

int lookup_scope(string name, vector<int> scope);

void table_dump();