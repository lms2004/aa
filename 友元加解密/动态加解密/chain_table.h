#ifndef _CHAIN_H
#define _CHAIN_H
#include"chain_table.h"
#include<vector>
#include<iostream>
using std::string;
struct node {
	string text;
	node* next;
	node(string text_) : text(text_), next(nullptr) {}
};

class string_table {
public:
    string_table():head(nullptr),num(0) {};
    ~string_table();
    void insert(string text);
    void delete_end_node();
    void print();

    friend class encryption;
private:
    node* head;
    int num;
};
class encryption {
public:
    encryption(string key) :key(key) {};
    void encryption_(string& text);
    void disclassify_(string& text);
    void encryption_n_words_(string_table& table);
    void disclassify_n_words_(string_table& table);
private:
    string key;
};
#endif