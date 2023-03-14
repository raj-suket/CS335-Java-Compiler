#pragma once
#include "bits/stdc++.h"
using namespace std;

// #ifndef MY_HEADER_H__
// #define MY_HEADER_H__



// #endif


typedef struct tab_item{
    int size;

    vector<int> lines;

    set<int> scope; 
    int type = -1;
}tab_item;

static map<string, tab_item> sym_table;

void insert(string name, int type, int lineno);

tab_item* lookup(string name);

tab_item* lookup_scope(string name, int scope);

void hide_scope();

void incr_scope();

void table_dump();