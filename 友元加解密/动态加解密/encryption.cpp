#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include"chain_table.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;
void encryption::encryption_(string& text) {
    int len = text.size() - key.size();
    for (int i = 0; i < abs(len); i++) {
        key += "@";
    }
    for (int i = 0; i < text.size(); i++) {
        text[i] ^= int(122323+ key[i]);
    }
}

void encryption::disclassify_(string& text) {
    encryption_(text);
}

void encryption::encryption_n_words_(string_table& table) {
    node* head = table.head;
    if (!head) {
        return;
    }
    node* prev = head;
    while (prev) {
        string temp = prev->text;
        encryption_(temp);
        prev->text = temp;
        prev = prev->next;
    }
}

void encryption::disclassify_n_words_(string_table& table) {
    encryption_n_words_(table);
}
