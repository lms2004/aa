#include"chain_table.h"

void string_table::insert(string name) {
    node* new_node = new node(name);

    if (!head) {
        num++;
        head = new_node;
        return;
    }
    node* temp = head;
    new_node->next = temp;
    head = new_node;
    num++;
}

void string_table::delete_end_node() {
    if (!head) {
        return ;
    }
    if (num == 1) {
        head->text = "";
        head = nullptr;
        num--;
        return;
    }
    node* prev = head;
    while (prev->next->next) {
        prev = prev->next;
    }
    prev->next->text = "";
    delete prev->next;
    prev->next = nullptr;
    num--;
    return ;
}
void string_table::print() {
    node* prev = head;
    int  n = 1;
    while (prev) {
        std::cout << "µÚ"<<n<<"¸ö£º" << prev->text << std::endl;
        prev = prev->next; 
        n++;
    }
}
string_table::~string_table() {
    if (num == 0) {
        return;
    }
    for (int i = 0; i < num-1; i++) {
        delete_end_node();
    }
    head->text = "";
    head = nullptr;
}