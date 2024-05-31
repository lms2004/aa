#include"chain_table.h"

void score_table::insert(double score, string name) {
	node* new_node = new node(score, name);
 
	if (!head) {
		head = new_node;
		return;
	}
	node* temp = head;
    new_node->next = temp;
    head = new_node;
}

void score_table::delete_node(string stu) {
    if (!head) {
        return;
    }
	if (head->name == stu) {
        node* temp = head;
        head = head->next;
        delete temp;
		return;
	}
    node* prev = head;
    while (prev->next && prev->next->name != stu) {
        prev = prev->next;
    }
    if (!prev->next) {
        std::cout << "����Ϊ" << stu << "�Ľ�㲻����." << std::endl;
        return;
    }
    node* to_delete = prev->next;
    prev->next = to_delete->next;
    delete to_delete;

}
void score_table::print() {
    node* prev = head;
    while (prev) {
        std::cout << "������" << prev->name << " �ɼ��� " << prev->score << std::endl;
        prev = prev->next;
    }
}